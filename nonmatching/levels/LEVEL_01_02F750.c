/* USA LEVEL_01:02F750, 232-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Byte-exact in an isolated link; local declarations still conflict with accepted definitions or
 * callers. No matching credit.
 * Remaining issue: three levers from 43 words: the pending index as a one-element array global
 * (extern int D_001F457C[1]; keeps the -1 store ahead of the D_002313A8 load), the global read
 * after the -1 test, the base + 0x84000 offset computed into a local before the slot test, and
 * one shared return 0 at the end (guarded body instead of an early return, so the return-1 block
 * falls through first); func_12BCF0 called with its accepted seven arguments (int/pointer
 * classes agree)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x02F750 -- consumes the pending slot index and submits a request for it. */
typedef struct { int f0, f4, f8, fC, f10, f14, f18, f1C, f20; } Req;
typedef struct { char pad0[8]; int f8; int fC; int f10; int f14; } Slot;
typedef struct {
    char pad0[0x2D4];
    Slot *slots;
    char pad2D8[4];
    int f2DC;
    unsigned char f2E0;
} Lv;
extern int D_001F457C[1];
extern Lv *D_002313A8;
extern unsigned char D_0023301C;
extern unsigned char D_0023301D;
extern int func_12BCF0(int a, int b, int c, Req *r, int d, int e, int f);

int func_02F750(void)
{
    Req r;
    int idx;
    Slot *s;
    int kind;
    Lv *g;
    int base;
    int off;

    idx = D_001F457C[0];
    if (idx != -1) {
        D_001F457C[0] = -1;
        g = D_002313A8;
        base = g->f2DC;
        s = &g->slots[idx];
        r.f0 = 0;
        r.f4 = 0;
        r.f8 = 0xB9C25B73;
        r.fC = 0;
        r.f10 = 0;
        r.f14 = 0xB51670D1;
        off = base + 0x84000;
        kind = 2;
        if (s->f8 != 0) {
            r.f18 = off;
            r.f1C = s->f14;
            r.f20 = s->fC;
            kind = 3;
        }
        if (func_12BCF0(0, base, kind, &r, D_0023301C, D_0023301D, 0)) {
            D_002313A8->f2E0 = idx;
            return 1;
        }
    }
    return 0;
}
