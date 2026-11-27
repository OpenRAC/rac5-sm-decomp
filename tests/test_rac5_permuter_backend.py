#!/usr/bin/env python3
"""Real optional RAC5 toolchain integration plus generic wrapper-bound checks.

Set RAC5_MATCH_RUNTIME and OPENRAC_SOURCE_RAC5_NTSC to execute the live tests.
Only already accepted public C sources are used; game bytes stay external.
"""
import json
import hashlib
import importlib.util
import os
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest
from types import SimpleNamespace

REPO=Path(__file__).resolve().parents[1]
BACKEND=REPO / "tools/rac5_permuter_backend.py"
spec=importlib.util.spec_from_file_location('rac5_permuter_backend_under_test', BACKEND)
backend=importlib.util.module_from_spec(spec)
spec.loader.exec_module(backend)


class ReferenceInputTests(unittest.TestCase):
    def setUp(self):
        self.temporary=tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.folder=Path(self.temporary.name)
        self.data=b'authored synthetic input'
        (self.folder/'TEST.REL').write_bytes(self.data)
        self.pin={'module_path':'LVL/TEST.REL','module_size':len(self.data),
                  'module_sha256':hashlib.sha256(self.data).hexdigest()}
        self.ctx=SimpleNamespace(repo=self.folder,runtime={'modules':str(self.folder)},
                                 module_pins={'TEST.REL':self.pin},module_cache={})

    def test_reference_is_verified_and_cached_only_for_this_invocation(self):
        self.assertEqual(backend.pinned_module(self.ctx,'TEST.REL'),self.data)
        (self.folder/'TEST.REL').write_bytes(b'changed input of same sz')
        self.assertEqual(backend.pinned_module(self.ctx,'TEST.REL'),self.data)
        fresh=SimpleNamespace(repo=self.folder,runtime=self.ctx.runtime,module_pins=self.ctx.module_pins,module_cache={})
        with self.assertRaisesRegex(ValueError,'mismatch'):
            backend.pinned_module(fresh,'TEST.REL')

    def test_unknown_module_is_refused_before_reading(self):
        with self.assertRaisesRegex(ValueError,'Missing canonical module pin'):
            backend.pinned_module(self.ctx,'../UNKNOWN.REL')

    def test_size_change_is_refused(self):
        (self.folder/'TEST.REL').write_bytes(self.data+b'!')
        with self.assertRaisesRegex(ValueError,'size mismatch'):
            backend.pinned_module(self.ctx,'TEST.REL')

    def test_same_size_byte_change_is_refused(self):
        (self.folder/'TEST.REL').write_bytes(bytes([self.data[0]^1])+self.data[1:])
        with self.assertRaisesRegex(ValueError,'SHA-256 mismatch'):
            backend.pinned_module(self.ctx,'TEST.REL')

    def target_context(self,route=None):
        repo=self.folder/'repo'
        (repo/'config/levels').mkdir(parents=True,exist_ok=True)
        (repo/'config/levels/body_sources.tsv').write_text('source\tprofile\tas\n')
        ctx=SimpleNamespace(repo=repo,runtime={'targets':{'func_demo':route} if route else {}},
                            module_pins={'TEST.REL':self.pin})
        return ctx,repo/'nonmatching/example.c'

    def test_source_key_must_belong_to_checkout(self):
        ctx,source=self.target_context()
        with self.assertRaisesRegex(ValueError,'outside the selected checkout'):
            backend.target(ctx,'func_demo',self.folder/'outside.c')

    def test_unfinished_target_requires_explicit_reviewed_bounds(self):
        ctx,source=self.target_context()
        with self.assertRaisesRegex(ValueError,'No reviewed route/bounds'):
            backend.target(ctx,'func_demo',source)

    def test_runtime_cannot_override_reference_pin(self):
        route={'source':'nonmatching/example.c','profile':'pinned','as':'gnu-ee-trial',
               'placements':[{'module':'TEST.REL','offset':0,'size':4,'module_size':1}]}
        ctx,source=self.target_context(route)
        with self.assertRaisesRegex(ValueError,'contradicts canonical module pin'):
            backend.target(ctx,'func_demo',source)

    def test_unfinished_bounds_cannot_escape_the_module(self):
        route={'source':'nonmatching/example.c','profile':'pinned','as':'gnu-ee-trial',
               'placements':[{'module':'TEST.REL','offset':len(self.data)-2,'size':4}]}
        ctx,source=self.target_context(route)
        with self.assertRaisesRegex(ValueError,'outside the pinned module'):
            backend.target(ctx,'func_demo',source)


@unittest.skipUnless(os.environ.get('RAC5_CACHE_TEST_MEASUREMENT'), 'frozen real cache fixture not configured')
class CacheIdentityTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.repo=Path(os.environ['OPENRAC_SOURCE_RAC5_NTSC']).resolve()
        cls.runtime=Path(os.environ['RAC5_MATCH_RUNTIME']).resolve()
        measured=Path(os.environ['RAC5_CACHE_TEST_MEASUREMENT'])
        cls.measurement=json.loads(measured.read_text())
        if any(k not in cls.measurement for k in ('per_source_flags','backend_sha256','preprocessed_sha256')):
            raise unittest.SkipTest('Regenerate this legacy cache receipt with the current backend')
        cls.fixture=Path(tempfile.mkdtemp(prefix='rac5-permuter-cache-test-'))
        cls.source=cls.fixture/'source.c'
        cls.source.write_bytes((cls.repo/cls.measurement['source_key']).read_bytes())
        cls.obj=cls.fixture/'object.o'
        cls.obj.write_bytes((measured.parent/(Path(cls.measurement['source_key']).stem+'.o')).read_bytes())
        cls.command=[sys.executable,'-B',str(BACKEND),
            '--repo',str(cls.repo),'--runtime',str(cls.runtime),'check','--function',cls.measurement['function'],
            '--candidate',str(cls.source),'--out',str(cls.obj)]

    def check(self, metadata):
        self.obj.with_suffix('.o.json').write_text(json.dumps(metadata))
        return subprocess.run(self.command,capture_output=True,text=True,timeout=30)

    def test_current_cache_is_still_accepted_without_compiling(self):
        p=self.check(self.measurement)
        self.assertEqual(p.returncode,0,p.stderr)
        self.assertIn('EXACT',p.stdout)

    def test_stale_profile_and_assembler_are_rejected(self):
        for key,value in [('profile','gnu-ee-trial'),('assembler','r5900-mfc1')]:
            other=dict(self.measurement);other[key]=value
            p=self.check(other)
            self.assertNotEqual(p.returncode,0)
            self.assertIn('Canonical source route',p.stderr)

    def test_stale_source_and_full_flags_are_rejected(self):
        for key,value in [('per_source_flags',['-fno-gcse']),('flags',['-quiet','-O0','-G0'])]:
            other=dict(self.measurement);other[key]=value
            p=self.check(other)
            self.assertNotEqual(p.returncode,0)
            self.assertIn('flags changed after measurement',p.stderr)

    def test_changed_backend_and_preprocessor_inputs_are_rejected(self):
        for key,message in [('backend_sha256','Backend changed'),
                            ('preprocessed_sha256','Preprocessor inputs changed')]:
            other=dict(self.measurement);other[key]='0'*64
            p=self.check(other)
            self.assertNotEqual(p.returncode,0)
            self.assertIn(message,p.stderr)


@unittest.skipUnless(os.environ.get('RAC5_MATCH_RUNTIME') and os.environ.get('OPENRAC_SOURCE_RAC5_NTSC'),
                     'private runtime and lawful game inputs not configured')
class LiveBackendTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.repo=Path(os.environ['OPENRAC_SOURCE_RAC5_NTSC']).resolve()
        cls.runtime=Path(os.environ['RAC5_MATCH_RUNTIME']).resolve()
        cfg=json.loads(cls.runtime.read_text())
        Path(cfg['scratch']).mkdir(parents=True,exist_ok=True)
        cls.scratch=Path(tempfile.mkdtemp(prefix='rac5-backend-tests-',dir=cfg['scratch']))
        cls.command=[sys.executable,'-B',str(BACKEND),
                     '--repo',str(cls.repo),'--runtime',str(cls.runtime)]
        cls.source=cls.repo/'src/levels/shared/func_00000100.c'
        cls.out=cls.scratch/'constant.o'
        p=subprocess.run(cls.command+['compile','--function','func_00000100','--source-key',str(cls.source),
                         '--candidate',str(cls.source),'--out',str(cls.out)],capture_output=True,text=True,timeout=90)
        if p.returncode:
            raise RuntimeError(p.stdout+p.stderr)
        cls.positive=json.loads(cls.out.with_suffix('.o.json').read_text())

    def test_real_qualified_compiler_and_linker_positive(self):
        self.assertTrue(self.positive['exact'])
        self.assertFalse(self.positive['accepted'])
        self.assertTrue(self.positive['placements'])
        self.assertTrue(self.positive['source_policy_raw_and_preprocessed'])
        self.assertEqual(len(self.positive['backend_sha256']),64)
        self.assertEqual(len(self.positive['preprocessed_sha256']),64)
        for pin in self.positive['tool_pins'].values():
            self.assertEqual(pin['sha256'],pin['expected'])
        self.assertTrue(all(len(p['module_sha256'])==64 and p['module_size']>p['expected']
                            for p in self.positive['placements']))

    def test_modified_module_rejected_before_compilation_and_prepare(self):
        cfg=json.loads(self.runtime.read_text())
        module=self.positive['placements'][0]['module']
        bad_modules=self.scratch/'bad-modules'
        bad_modules.mkdir()
        raw=bytearray((Path(cfg['modules'])/module).read_bytes())
        raw[-1]^=1  # Outside the function; whole-module pin must still reject it.
        (bad_modules/module).write_bytes(raw)
        cfg['modules']=str(bad_modules)
        cfg['retail']=str(self.scratch/'bad-retail')
        altered=self.scratch/'altered-runtime.json'
        altered.write_text(json.dumps(cfg))
        command=self.command.copy()
        command[command.index('--runtime')+1]=str(altered)
        bad_out=self.scratch/'bad-reference.o'
        for subcommand in ('compile','prepare'):
            args=command+[subcommand,'--function','func_00000100','--source-key',str(self.source)]
            if subcommand=='compile':args+=['--candidate',str(self.source),'--out',str(bad_out)]
            p=subprocess.run(args,capture_output=True,text=True,timeout=30)
            self.assertNotEqual(p.returncode,0)
            self.assertIn('Module SHA-256 mismatch',p.stderr)
        self.assertFalse(bad_out.exists())
        self.assertFalse((self.scratch/'bad-retail').exists())

    def test_wrong_import_is_rejected_with_equal_bytes(self):
        original=self.repo/'src/levels/shared/higIoRead__FiPvUi.c'
        candidate=self.scratch/'wrong-import.c'
        candidate.write_text(original.read_text().replace('ps2fioRead','asyncPs2fioRead'))
        out=self.scratch/'wrong-import.o'
        p=subprocess.run(self.command+['compile','--function','higIoRead__FiPvUi','--source-key',str(original),
                         '--candidate',str(candidate),'--out',str(out)],capture_output=True,text=True,timeout=90)
        self.assertEqual(p.returncode,0,p.stdout+p.stderr)
        result=json.loads(out.with_suffix('.o.json').read_text())
        self.assertFalse(result['exact'])
        self.assertTrue(all(r['diff_words']==0 and r['import_errors'] for r in result['placements']))

    def test_checker_refuses_a_different_source_without_recompiling(self):
        other=self.scratch/'different-source.c'
        other.write_text(self.source.read_text().replace('return 1;','return 2;'))
        p=subprocess.run(self.command+['check','--function','func_00000100',
                         '--candidate',str(other),'--out',str(self.out)],capture_output=True,text=True,timeout=30)
        self.assertNotEqual(p.returncode,0)
        self.assertIn('identity changed',p.stderr)

    def test_checker_refuses_an_altered_object(self):
        changed=self.scratch/'changed-object.o'
        raw=bytearray(self.out.read_bytes());raw[0]^=1;changed.write_bytes(raw)
        changed.with_suffix('.o.json').write_text(json.dumps(self.positive))
        p=subprocess.run(self.command+['check','--function','func_00000100',
                         '--candidate',str(self.source),'--out',str(changed)],
                         capture_output=True,text=True,timeout=30)
        self.assertNotEqual(p.returncode,0)
        self.assertIn('identity changed',p.stderr)


if __name__=='__main__':
    unittest.main(verbosity=2)
