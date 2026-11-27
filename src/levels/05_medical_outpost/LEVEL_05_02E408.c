/* LEVEL_05:0x02E408 -- placement copy of LEVEL_01_02F750.c: consumes the pending slot index and submits a request for it. */
typedef struct { int f0, f4, f8, fC, f10, f14, f18, f1C, f20; } Req;
typedef struct { char pad0[8]; int f8; int fC; int f10; int f14; } Slot;
typedef struct {
    char pad0[0x2D4];
    Slot *slots;
    char pad2D8[4];
    int f2DC;
    unsigned char f2E0;
} Lv;
extern int D_001E38FC[1];
extern Lv *D_0021D0A8;
extern unsigned char D_0021ED1C;
extern unsigned char D_0021ED1D;
extern int func_127668(int a, int b, int c, Req *r, int d, int e, int f);

int func_02E408(void)
{
    Req r;
    int idx;
    Slot *s;
    int kind;
    Lv *g;
    int base;
    int off;

    idx = D_001E38FC[0];
    if (idx != -1) {
        D_001E38FC[0] = -1;
        g = D_0021D0A8;
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
        if (func_127668(0, base, kind, &r, D_0021ED1C, D_0021ED1D, 0)) {
            D_0021D0A8->f2E0 = idx;
            return 1;
        }
    }
    return 0;
}
