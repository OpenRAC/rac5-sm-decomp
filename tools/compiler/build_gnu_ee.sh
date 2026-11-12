#!/usr/bin/env bash
# Build the GNU EE tools of the RAC5 gates from public sources and the patches here.
#
#   tools/compiler/build_gnu_ee.sh [OUT] [SELECTOR...]
#
# SELECTOR is one of:
#   pinned  cpp, cc1 and as of the pinned chain (config/boot/compiler_trial.json "tools"):
#           the public archive + patches/0000-rac5-pinned-base.patch
#           + patches/0001-rac5-short-loop-six.patch
#   span5   the boot assembler of the same name: the public archive + Lombyte's 0020 and
#           0027 gas patches (patches/lombyte/) + patches/0005-rac5-gas-span5.patch
#   span5b  the public archive + patches/0005-rac5-gas-span5.patch
#           + patches/0006-rac5-gas-span5b.patch
# Default: all three. OUT defaults to build/toolchain/ (ignored by Git): OUT/pinned/{cpp,cc1,as},
# OUT/span5/as-rac5span5 and OUT/span5b/as-rac5span5b, the names the gates look for.
#
# Run it on x86-64 Linux or WSL with a 32-bit capable gcc (gcc -m32), make, patch and curl.
# It downloads gnu-ee-binutils-gcc-1.1.tar.gz and bison-1.28.tar.gz to build/downloads/ and
# checks them, refuses to build unless the patched sources hash as listed below, and prints
# each binary's SHA-256 next to its pin. The binaries' hashes depend on the build host (the
# host compiler's version) and, for the pinned chain, on WORK (default /tmp/rac5-gnu-ee),
# whose path its assertion messages embed; the sources' do not. On another host, run the gates with
# --unpinned-tools: they then record the differing tool hashes instead of refusing them, and
# still require every compiled object to match its pinned hash (docs/contributing/toolchain.md).
set -euo pipefail
ROOT=$(cd "$(dirname "$0")/../.." && pwd)
HERE=$ROOT/tools/compiler
OUT=${1:-$ROOT/build/toolchain}
[ $# -gt 0 ] && shift
SELECTORS=${*:-pinned span5 span5b}
DL=${DOWNLOADS:-$ROOT/build/downloads}
W=${WORK:-/tmp/rac5-gnu-ee}
J=$(nproc)
mkdir -p "$DL" "$W" "$OUT"
OUT=$(cd "$OUT" && pwd)

fetch() {  # fetch FILE SHA256 URL
  [ -f "$DL/$1" ] || curl -fL --retry 3 -o "$DL/$1" "$3"
  echo "$2  $DL/$1" | sha256sum --check --quiet
}
fetch gnu-ee-binutils-gcc-1.1.tar.gz 1f518043e252d6eda726386971d52eda26541ab936ea73a9783d73712b595f92 \
  "https://web.archive.org/web/20060518234647id_/http://ps2dev.sourceforge.net:80/downloads/ee/gnu-ee-binutils-gcc-1.1.tar.gz"

tree() {  # tree NAME PATCH...: a fresh source tree with the patches applied in order
  rm -rf "$W/$1" && mkdir -p "$W/$1"
  tar xzf "$DL/gnu-ee-binutils-gcc-1.1.tar.gz" -C "$W/$1"
  mv "$W/$1/gnu-ee-binutils-gcc" "$W/$1/src"
  local name=$1; shift
  for patch in "$@"; do
    (cd "$W/$name/src" && patch -p1 -s --no-backup-if-mismatch < "$patch")
  done
}

sums() {  # sums NAME: check the patched sources against the hashes on stdin
  (cd "$W/$1/src" && sha256sum --check --quiet) || { echo "$1: patched sources differ"; exit 1; }
}

GAS_FLAGS="-O2 -fno-strict-aliasing -fcommon -std=gnu89 -D_GNU_SOURCE -w"
build_gas() {  # build_gas NAME OUTPUT: the assembler alone, built in its tree
  (cd "$W/$1/src" \
     && CC="gcc -m32" CFLAGS="$GAS_FLAGS" ./configure --target=mips64r5900-sf-elf \
          --host=i686-linux-gnu --build=i686-linux-gnu --disable-nls \
     && make -j"$J" all-gas CC="gcc -m32" CFLAGS="$GAS_FLAGS") > "$W/$1.log" 2>&1 \
    || { tail -30 "$W/$1.log"; exit 1; }
  mkdir -p "$(dirname "$2")" && cp "$W/$1/src/gas/as-new" "$2"
}

for selector in $SELECTORS; do
  case $selector in
  pinned)
    fetch bison-1.28.tar.gz c5d3e4858e17cb440cee9de7837f07277bcfb03507e9d2f0c506cab5efe36c3a \
      https://ftp.gnu.org/gnu/bison/bison-1.28.tar.gz
    tree pinned "$HERE/patches/0000-rac5-pinned-base.patch"
    sums pinned <<'SUMS'
c76c0bec5b56c198381ab2a4fc60c161a4287e8312d7d1fdea3d1e6a0e1af614  gcc/config/mips/mips.c
52f470a043ffbba535582e2f08a8353d23bbf6521b1b63e241847f464891d9e6  gcc/config/mips/mips.h
b22dfff81e41d3d378b1f35a231d2c11b60700967d6faf70b820f6300caf81d6  gas/config/tc-mips.c
8d530eb7ccfef3b7f9c11d7bc9ea51e4c76b54afc12ca84e699435a57eabb031  gcc/c-gperf.h
SUMS
    (cd "$W/pinned/src" && patch -p1 -s --no-backup-if-mismatch \
       < "$HERE/patches/0001-rac5-short-loop-six.patch")
    # bison 1.28: the 1999 grammars need its skeleton.
    if [ ! -x "$W/bison/bin/bison" ]; then
      rm -rf "$W/bison-1.28" && tar xzf "$DL/bison-1.28.tar.gz" -C "$W"
      (cd "$W/bison-1.28" && CC="gcc -std=gnu89" CFLAGS="-O2 -fcommon" \
         ./configure --prefix="$W/bison" && make -j"$J" && make install) > "$W/bison.log" 2>&1
    fi
    export BISON_SIMPLE=$W/bison/share/bison.simple BISON_HAIRY=$W/bison/share/bison.hairy
    F="-O2 -fno-strict-aliasing -fcommon -std=gnu89 -D_GNU_SOURCE"
    # The pinned chain was configured without the assembler alignment probes, so its cc1
    # writes `.align N`; a combined-tree configure finds the gas sources and selects
    # `.p2align N`, which assembles to other object bytes. The two auto-host.h macros are
    # therefore turned off after configure.
    rm -rf "$W/pinned/build" && mkdir "$W/pinned/build"
    (cd "$W/pinned/build" \
       && printf 'obstack.o gcc.o mkstemp.o: override CFLAGS = -g\n' > host-flags.mk \
       && CC="gcc -m32" CFLAGS="$F" bash "$W/pinned/src/configure" --target=mips64r5900-sf-elf \
            --host=i686-linux-gnu --build=i686-linux-gnu --disable-nls --enable-languages=c \
            --without-headers \
       && sed -i -e 's|^#define HAVE_GAS_MAX_SKIP_P2ALIGN 1$|/* #undef HAVE_GAS_MAX_SKIP_P2ALIGN */|' \
                 -e 's|^#define HAVE_GAS_BALIGN_AND_P2ALIGN 1$|/* #undef HAVE_GAS_BALIGN_AND_P2ALIGN */|' \
                 gcc/auto-host.h \
       && ! grep -q '^#define HAVE_GAS_.*P2ALIGN' gcc/auto-host.h \
       && make -j"$J" all-libiberty \
       && make -C gcc -f Makefile -f "$W/pinned/build/host-flags.mk" LANGUAGES=c \
            "CC=gcc -m32" "CFLAGS=$F" BISON="$W/bison/bin/bison" \
            insn-flags.h insn-codes.h insn-config.h \
       && make -C gcc -f Makefile -f "$W/pinned/build/host-flags.mk" -j"$J" LANGUAGES=c "CC=gcc -m32" \
            "CFLAGS=$F" BISON="$W/bison/bin/bison" cc1 cpp \
       && make -j"$J" all-gas) > "$W/pinned.log" 2>&1 || { tail -30 "$W/pinned.log"; exit 1; }
    mkdir -p "$OUT/pinned"
    cp "$W/pinned/build/gcc/cc1" "$W/pinned/build/gcc/cpp" "$OUT/pinned/"
    cp "$W/pinned/build/gas/as-new" "$OUT/pinned/as"
    ;;
  span5)
    tree span5 "$HERE/patches/lombyte/0020-gas-absolute-unknown-symbol.patch" \
               "$HERE/patches/lombyte/0027-gas-inline-float-literals.patch" \
               "$HERE/patches/0005-rac5-gas-span5.patch"
    sums span5 <<'SUMS'
80fa8a9de409d67685f619b9fe438f1d9c8d595dd74fffa201626ca24caaed76  gas/config/tc-mips.c
SUMS
    build_gas span5 "$OUT/span5/as-rac5span5"
    ;;
  span5b)
    tree span5b "$HERE/patches/0005-rac5-gas-span5.patch" "$HERE/patches/0006-rac5-gas-span5b.patch"
    sums span5b <<'SUMS'
5620e21ae2a48e3531442e14434464cd21fe91fc98e147fab1a95f8b2580c1e4  gas/config/tc-mips.c
SUMS
    build_gas span5b "$OUT/span5b/as-rac5span5b"
    ;;
  *)
    echo "unknown selector: $selector (pinned, span5 or span5b)"; exit 2 ;;
  esac
done

# Each binary next to its pin: equal on the build host of the pins, different elsewhere.
python3 - "$ROOT" "$OUT" $SELECTORS <<'PY'
import hashlib, json, sys
from pathlib import Path
root, out, selectors = Path(sys.argv[1]), Path(sys.argv[2]), sys.argv[3:]
profile = json.loads((root / "config/boot/compiler_trial.json").read_text(encoding="utf-8"))
rows = []
if "pinned" in selectors:
    rows += [(f"pinned/{name}", profile["tools"][f"{name}_sha256"]) for name in ("cpp", "cc1", "as")]
for selector in ("span5", "span5b"):
    if selector in selectors:
        tools = profile["extra_assemblers"][selector]["tools"]
        rows.append((f"{selector}/{tools['assembler']}", tools["assembler_sha256"]))
for name, pin in rows:
    actual = hashlib.sha256((out / name).read_bytes()).hexdigest()
    print(f"{name:24} {actual[:16]}  {'= pin' if actual == pin else 'differs from pin ' + pin[:16]}")
PY
