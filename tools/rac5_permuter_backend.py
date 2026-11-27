#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-3.0-or-later
"""Isolated RAC5 level-C backend for OpenRAC's decomp-permuter profiles.

Uses only public RAC5 readers and compile/link functions. Runtime tool paths,
private game inputs, scratch paths and explicitly reviewed unfinished bounds
are supplied in an external JSON file, never embedded in this tool/profile.
"""
from __future__ import annotations
import argparse
import csv
import hashlib
import json
import os
from pathlib import Path
import shutil
import sys
import tempfile
import time
from types import SimpleNamespace


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def save(path, value):
    Path(path).write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def integer(value):
    if type(value) is int:
        return value
    if isinstance(value, str):
        return int(value, 0)
    raise ValueError('An integer or integer string is required')


def context(args):
    repo = Path(args.repo).resolve()
    runtime = json.loads(Path(args.runtime).read_text(encoding='utf-8-sig'))
    sys.path.insert(0, str(repo / 'tools'))
    import cflags
    import compile_boot_trial as compiler
    import level_c_gate as gate
    from level_body_link import read_object, resolve_symbols
    from import_guard import check_import_call_identity, named_import_calls
    from c_source_policy import require_c_source
    from elf import inspect_elf
    import rel
    module_pins = {}
    with (repo / 'config/levels/modules.tsv').open(encoding='utf-8-sig') as f:
        for row in csv.DictReader((line for line in f if not line.startswith('#')), delimiter='\t'):
            name = Path(row['path']).name
            digest = row['sha256']
            if name in module_pins or len(digest) != 64 or any(c not in '0123456789abcdef' for c in digest):
                raise ValueError('Invalid or duplicate canonical module pin: ' + name)
            module_pins[name] = {'module_path': row['path'], 'module_size': int(row['size']),
                                 'module_sha256': digest}
    module_cache = {}  # invocation-local bytes only; never reused by a later command
    return SimpleNamespace(**locals())


def target(ctx, function, source_key):
    repo, runtime = ctx.repo, ctx.runtime
    original = Path(source_key).resolve()
    if not original.is_relative_to(repo):
        raise ValueError('Source key is outside the selected checkout')
    key = original.relative_to(repo).as_posix()
    with (repo / 'config/levels/body_sources.tsv').open(encoding='utf-8-sig') as f:
        routes = {r['source']: r for r in csv.DictReader(f, delimiter='\t')}
    if key in routes:
        route = routes[key]
        with (repo / 'config/levels/bodies.tsv').open(encoding='utf-8-sig') as f:
            places = [dict(r, offset=integer(r['offset']), size=integer(r['size']))
                      for r in csv.DictReader(f, delimiter='\t') if r['source'] == key]
    else:
        # Unaccepted bounds must be explicit input; never infer size from a label.
        route = runtime.get('targets', {}).get(function)
        if not route or route['source'] != key:
            raise ValueError('No reviewed route/bounds supplied for this unfinished source')
        places = [dict(r, offset=integer(r['offset']), size=integer(r['size']))
                  for r in route['placements']]
    if not places:
        raise ValueError('No placements')
    for place in places:
        pin = ctx.module_pins.get(place['module'])
        if not pin:
            raise ValueError('Missing canonical module pin: ' + place['module'])
        for name, value in pin.items():
            if name in place and place[name] != value:
                raise ValueError('Runtime placement contradicts canonical module pin: ' + name)
            place[name] = value
        if place['offset'] < 0 or place['size'] <= 0 or place['offset'] + place['size'] > pin['module_size']:
            raise ValueError('Body range is outside the pinned module')
    entry = ctx.cflags.for_source(ctx.cflags.load(), original)
    if not entry.pinned or not entry.assembler_pinned:
        raise ValueError('Driver-routed source is not supported by this level-C profile')
    return {'source': key, 'original': original, 'function': function,
            'profile': route['profile'], 'assembler': route['as'],
            'placements': places, 'extra_flags': list(entry.flags)}


def module_path(ctx, module):
    return Path(ctx.runtime.get('modules', ctx.repo / 'baserom/LVL')) / module


def pinned_module(ctx, module):
    if module not in ctx.module_pins:
        raise ValueError('Missing canonical module pin: ' + module)
    if module not in ctx.module_cache:
        data = module_path(ctx, module).read_bytes()
        pin = ctx.module_pins[module]
        if len(data) != pin['module_size']:
            raise ValueError('Module size mismatch: ' + module)
        if hashlib.sha256(data).hexdigest() != pin['module_sha256']:
            raise ValueError('Module SHA-256 mismatch: ' + module)
        ctx.module_cache[module] = data
    return ctx.module_cache[module]


def qualify(ctx, t):
    base = json.loads((ctx.repo / 'config/boot/compiler_trial.json').read_text(encoding='utf-8-sig'))
    levels = json.loads((ctx.repo / 'config/levels/compiler_trial.json').read_text(encoding='utf-8-sig'))
    rt = ctx.runtime
    cpp, cc1 = Path(rt['cpp']), Path(rt['compilers'][t['profile']])
    default_as = Path(rt['assemblers']['gnu-ee-trial'])
    extra_as = {k: Path(v) for k, v in rt['assemblers'].items() if k != 'gnu-ee-trial'}
    assembler, as_flags = ctx.gate.select_body_assembler(t['assembler'], default_as, extra_as, levels)
    linker = Path(rt['linker'])
    cc_hash = base['tools']['cc1_sha256'] if t['profile'] == 'pinned' else base['extra_compilers'][t['profile']]['tools']['cc1_sha256']
    as_hash = base['tools']['as_sha256'] if t['assembler'] == 'gnu-ee-trial' else levels['extra_assemblers'][t['assembler']]['tools']['as_sha256']
    expected = {'cpp': (cpp, base['tools']['cpp_sha256']), 'cc1': (cc1, cc_hash),
                'as': (assembler, as_hash), 'linker': (linker, ctx.gate.LINKER_SHA256)}
    pins = {}
    for name, (path, digest) in expected.items():
        pins[name] = {'path': str(path), 'expected': digest, 'sha256': sha(path)}
        if pins[name]['sha256'] != digest:
            raise ValueError('Unqualified tool: ' + name)
    return base, cpp, cc1, assembler, as_flags, linker, pins


def compile_candidate(ctx, args):
    started = time.monotonic()
    t = target(ctx, args.function, args.source_key)
    # Qualify every whole module before invoking any compiler or comparing bytes.
    for place in t['placements']:
        pinned_module(ctx, place['module'])
    base, cpp, cc1, assembler, as_flags, linker, pins = qualify(ctx, t)
    candidate = Path(args.candidate).resolve()
    ctx.require_c_source(candidate.read_text(encoding='utf-8-sig'), t['source'] + ' candidate')
    out = ctx.compiler.require_private_output(Path(args.out))
    scratch = ctx.compiler.require_private_output(Path(ctx.runtime['scratch']))
    scratch.mkdir(parents=True, exist_ok=True)
    stage = Path(tempfile.mkdtemp(prefix='rac5-candidate-', dir=scratch))
    copied = stage / t['original'].name
    copied.write_bytes(candidate.read_bytes())
    # compile_pinned performs preprocessing and policy checks through the public
    # pipeline. Source identity selects canonical per-file flags, not scratch flags.
    flags = ctx.compiler.compile_pinned(base, ctx.cflags.load(), t['original'], stage,
                 cpp, cc1, SimpleNamespace(name=t['original'].stem))
    ctx.compiler.run([*ctx.runtime.get('assembler_runner', []), str(assembler), *as_flags,
                      '-o', t['original'].stem + '.o', t['original'].stem + '.s'],
                     stage, stage / 'assembler.log')
    obj = stage / (t['original'].stem + '.o')
    parsed = ctx.read_object(obj)
    functions = ctx.gate.defined_functions(parsed)
    if functions.get(args.function, (None, None))[0] != 0:
        raise ValueError('Assigned function is not at object offset zero')
    if len(functions) != 1:
        raise ValueError('This adapter accepts one global body per object')
    out.parent.mkdir(parents=True, exist_ok=True)
    shutil.copyfile(obj, out)
    results = []
    links = stage / 'links'
    links.mkdir()
    ctx.gate.OUTPUT = links

    def run_link(command, cwd, log):
        ctx.compiler.run([*ctx.runtime.get('linker_runner', []), *command], cwd, log)

    ctx.gate.run_tool = run_link
    linked_obj = links / obj.name
    shutil.copyfile(obj, linked_obj)
    for p in t['placements']:
        data = pinned_module(ctx, p['module'])
        retail = data[p['offset']:p['offset'] + p['size']]
        if p.get('module_sha256') and hashlib.sha256(data).hexdigest() != p['module_sha256']:
            raise ValueError('Module hash differs from reviewed input')
        if p.get('body_sha256') and hashlib.sha256(retail).hexdigest() != p['body_sha256']:
            raise ValueError('Body hash differs from reviewed bounds')
        mapping, _ = ctx.resolve_symbols(parsed, *ctx.gate.module_symbols(data))
        size_error = None
        try:
            text = ctx.gate.link_level_body(p, linked_obj, mapping, linker)
        except ValueError as error:
            # The public linker gate rejects a wrong size. Keep the actual ELF
            # for diagnostic scoring; the checker will still reject this body.
            name = f"body_{p['module'].replace('.', '_')}_{p['offset']:06X}"
            elf = links / (name + '.elf')
            if not elf.exists():
                raise
            section = next(s for s in ctx.inspect_elf(elf)['sections'] if s['name'] == '.text')
            raw = elf.read_bytes()
            text = raw[section['file_offset']:section['file_offset'] + section['size']]
            size_error = str(error)
        errors = []
        try:
            checked = ctx.check_import_call_identity(parsed,
                ctx.named_import_calls(data).within(p['offset'], p['size']),
                {'module': p['module'], 'offset': p['offset'], 'size': p['size'], 'source': t['source']}, mapping)
        except ValueError as error:
            checked, errors = 0, [str(error)]
        diffs = [i for i in range(0, max(len(text), len(retail)), 4) if text[i:i+4] != retail[i:i+4]]
        prefix = f"{p['module'][:-4]}-{p['offset']:06X}"
        (stage / (prefix + '-linked.bin')).write_bytes(text)
        results.append({'module': p['module'], 'offset': p['offset'], 'expected': p['size'],
            'module_sha256': p['module_sha256'], 'module_size': p['module_size'],
            'compiled': len(text), 'diff_words': len(diffs), 'first_diff': diffs[0] if diffs else None,
            'import_errors': errors, 'import_sites_checked': checked,
            'exact': not diffs and not errors and size_error is None,
            'linked_sha256': hashlib.sha256(text).hexdigest(), 'size_error': size_error})
    measurement = {'function': args.function, 'source_key': t['source'],
        'backend_sha256': sha(Path(__file__)),
        'preprocessed_sha256': sha(stage / (t['original'].stem + '.i')),
        'source_sha256': sha(candidate), 'object_sha256': sha(out), 'profile': t['profile'],
        'assembler': t['assembler'], 'flags': flags, 'tool_pins': pins,
        'per_source_flags': t['extra_flags'],
        'source_policy_raw_and_preprocessed': True,
        'modules_catalog_sha256': sha(ctx.repo / 'config/levels/modules.tsv'),
        'placements': results, 'exact': all(r['exact'] for r in results),
        'accepted': False, 'qualification': 'isolated placements; full-program promotion not run',
        'stage': str(stage), 'elapsed_seconds': time.monotonic()-started}
    save(out.with_suffix(out.suffix + '.json'), measurement)
    save(stage / 'measurement.json', measurement)
    artifacts = ctx.runtime.get('artifacts')
    if artifacts:
        archive = ctx.compiler.require_private_output(Path(artifacts)) / stage.name
        archive.parent.mkdir(parents=True, exist_ok=True)
        shutil.copytree(stage, archive)
    print(json.dumps({'object': str(out), 'exact': measurement['exact'], 'stage': str(stage)}))


def check_candidate(ctx, args):
    obj, candidate = Path(args.out), Path(args.candidate)
    m = json.loads(obj.with_suffix(obj.suffix + '.json').read_text(encoding='utf-8-sig'))
    if m.get('backend_sha256') != sha(Path(__file__)):
        raise ValueError('Backend changed after measurement; regenerate the cache')
    if m['function'] != args.function or sha(obj) != m['object_sha256'] or sha(candidate) != m['source_sha256']:
        raise ValueError('Candidate/object identity changed after measurement')
    if sha(ctx.repo / 'config/levels/modules.tsv') != m['modules_catalog_sha256']:
        raise ValueError('Canonical module catalogue changed after measurement')
    current = target(ctx, args.function, str(ctx.repo / m['source_key']))
    base, cpp, _, _, _, _, pins = qualify(ctx, current)
    if {k: v['sha256'] for k, v in pins.items()} != {k: v['sha256'] for k, v in m['tool_pins'].items()}:
        raise ValueError('Qualified tools changed after measurement')
    if (current['profile'] != m['profile'] or current['assembler'] != m['assembler']
            or current['extra_flags'] != m['per_source_flags']):
        raise ValueError('Canonical source route or per-source flags changed after measurement')
    full_flags = ctx.compiler.cc1_flags(base, ctx.cflags.load(), current['original'])
    if full_flags != m['flags']:
        raise ValueError('Canonical compiler flags changed after measurement')
    expected = {(p['module'], p['offset'], p['size']) for p in current['placements']}
    measured = {(p['module'], p['offset'], p['expected']) for p in m['placements']}
    if expected != measured:
        raise ValueError('Canonical placements changed after measurement')
    ctx.require_c_source(candidate.read_text(encoding='utf-8-sig'), current['source'] + ' candidate')
    scratch = ctx.compiler.require_private_output(Path(ctx.runtime['scratch']))
    scratch.mkdir(parents=True, exist_ok=True)
    stage = Path(tempfile.mkdtemp(prefix='rac5-cache-check-', dir=scratch))
    (stage / current['original'].name).write_bytes(candidate.read_bytes())
    preprocessed = stage / (current['original'].stem + '.i')
    ctx.compiler.run([str(cpp.resolve()), *base['flags']['cpp'], current['original'].name],
                     stage, stage / 'cpp.log', preprocessed)
    ctx.require_c_source(preprocessed.read_text(encoding='utf-8-sig'), current['source'] + ' preprocessed')
    if sha(preprocessed) != m.get('preprocessed_sha256'):
        raise ValueError('Preprocessor inputs changed after measurement')
    for place in current['placements']:
        pinned_module(ctx, place['module'])
    print(f"{args.function}: {'EXACT' if m['exact'] else 'NONMATCHING'} {len(m['placements'])} placements")
    return 0 if m['exact'] else 1


def prepare_retail(ctx, args):
    import rabbitizer
    t = target(ctx, args.function, args.source_key)
    p = t['placements'][0]
    data = pinned_module(ctx, p['module'])
    named, packed = {}, {}
    head = ctx.rel.HEADER.unpack_from(data)
    for i in range(head[2]):
        site, kind, symbol, _ = ctx.rel.unpack_relocation(data, head[1] + i*ctx.rel.RELOCATION.size)
        if p['offset'] <= site < p['offset']+p['size']:
            name_at, _, _, _, _ = ctx.rel.SYMBOL.unpack_from(data, head[3]+symbol*ctx.rel.SYMBOL.size)
            named[site] = (kind, data[name_at:data.index(b'\0', name_at)].decode())
    for fix in ctx.rel.iter_packed_relocations(data, head[13], head[1]):
        if p['offset'] <= fix.site < p['offset']+p['size']:
            packed[fix.site] = fix.kind
    lines = [f'glabel {args.function}']
    for pos in range(p['offset'], p['offset']+p['size'], 4):
        word = int.from_bytes(data[pos:pos+4], 'little')
        asm = rabbitizer.Instruction(word, vram=pos, category=rabbitizer.InstrCategory.R5900).disassemble()
        mnemonic = asm.split()[0]
        if pos in named:
            kind, name = named[pos]
            if kind == 4: asm = f'{mnemonic} {name}'
            elif kind in (5,6): asm = f'{mnemonic} %hi({name})' if kind == 5 else f'{mnemonic} %lo({name})'
        elif pos in packed:
            kind = packed[pos]
            if kind in (0,1): asm = f'{mnemonic} %lo(D_local)' if kind == 0 else f'{mnemonic} %hi(D_local)'
            elif kind == 2: asm = f'{mnemonic} func_{(word & 0x03FFFFFF)*4:08X}'
            else: raise ValueError('Embedded word relocation needs separate boundary review')
        lines.append(f'/* {pos:08X} {word:08X} */ {asm}')
    lines.append(f'endlabel {args.function}')
    output = Path(ctx.runtime['retail']) / (args.function + '.s')
    ctx.compiler.require_private_output(output.parent).mkdir(parents=True, exist_ok=True)
    output.write_text('\n'.join(lines)+'\n', encoding='utf-8')
    print(str(output))


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--repo',required=True)
    parser.add_argument('--runtime',required=True)
    commands=parser.add_subparsers(dest='command',required=True)
    for name in ('compile','check','prepare','flags'):
        p=commands.add_parser(name)
        p.add_argument('--function',required=True)
        if name!='check':p.add_argument('--source-key',required=True)
        if name in ('compile','check'):
            p.add_argument('--candidate',required=True)
            p.add_argument('--out',required=True)
    args=parser.parse_args()
    ctx=context(args)
    if args.command=='compile':compile_candidate(ctx,args)
    elif args.command=='check':return check_candidate(ctx,args)
    elif args.command=='prepare':prepare_retail(ctx,args)
    else:
        t=target(ctx,args.function,args.source_key)
        base=json.loads((ctx.repo/'config/boot/compiler_trial.json').read_text(encoding='utf-8-sig'))
        print(' '.join([*base['flags']['cc1'],*t['extra_flags']]))
    return 0


if __name__=='__main__':
    try:
        raise SystemExit(main())
    except (ValueError,KeyError,OSError) as error:
        print(str(error),file=sys.stderr)
        raise SystemExit(1)
