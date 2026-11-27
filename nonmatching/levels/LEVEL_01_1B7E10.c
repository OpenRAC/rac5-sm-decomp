/* USA LEVEL_01:1B7E10, 196-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 196 bytes: 29 differing words; first difference +0x0. No matching credit.
 * Remaining issue: register allocation: f &= 0x1400 reused in place matches the length but every
 * role shifts (retail o in t0, f in v1, nf in a0, idx in a1, bits t2); retail also reloads the
 * key half-word after the 0xFFFF test (lhu twice) while CSE reuses it in mine; draft 33 words
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x1B7E10 -- when a flag bit of the owner's flag word is set, clears that bit and stores a half-word built from flag and record bits into a table entry, unless the entry index is the all-ones value. */

struct Elem {
    unsigned char pad0[0xC];
    unsigned int fC;
    unsigned int f10;
    unsigned int f14;
    unsigned char pad1[0x34 - 0x18];
};

struct Pool {
    unsigned char pad0[0x4];
    unsigned char *p4;
    unsigned char pad1[0x3F - 0x8];
    unsigned char b3F;
};

struct Key {
    unsigned short h0;
    unsigned char pad0[0x3 - 0x2];
    unsigned char b3;
};

struct Rec {
    unsigned char pad0[0x64];
    unsigned char *p64;
};

struct Obj {
    unsigned char pad0[0x40];
    struct Pool *p40;
    unsigned char b44;
    unsigned char pad1[0x58 - 0x45];
    struct Key *p58;
    unsigned char pad2[0x64 - 0x5C];
    int f64;
};

extern struct Rec D_0022F6F8[];

void func_1B7E10(struct Obj *o)
{
    int f;
    int idx;
    int nf;
    int bits;
    struct Pool *pool;
    struct Elem *el;
    struct Key *k;

    f = o->f64;
    if ((f & 0x20) == 0) {
        return;
    }
    idx = o->b44;
    nf = f & -33;
    o->f64 = nf;
    pool = o->p40;
    el = (struct Elem *)(pool->p4 + idx * 52);
    f &= 0x1400;
    bits = f | 0x81;
    if (el->fC == 0) {
        bits = f | 1;
    }
    if (el->f10 != 0) {
        bits = bits | 0x100;
    }
    if (el->f14 != 0) {
        bits = bits | 0x200;
    }
    if (pool->b3F == 1) {
        bits = bits | 0x800;
    }
    if ((((unsigned int)nf) >> 3) & 1) {
        bits = bits | 0x400;
    }
    k = o->p58;
    if (k->h0 == 0xFFFF) {
        return;
    }
    *(unsigned short *)(D_0022F6F8[k->b3].p64 + (k->h0 << 4) + 8) = bits;
}
