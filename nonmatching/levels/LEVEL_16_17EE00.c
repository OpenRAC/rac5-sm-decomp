/* USA LEVEL_16.REL:0x17EE00, 640-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 20 differing words; first difference at 0xA0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Cell {
    char pad0[0x3C];
    unsigned int f3C;
    unsigned int f40;
    char pad44[4];
    unsigned char slots[3];
} Cell;

typedef struct Eff {
    char pad0[0x14];
    float v[4];
} Eff;

struct Spawn {
    char pad0[0x58];
    struct Owner **slot;
};

struct Owner {
    char pad0[0xF8];
    int f_F8;
    char padFC[0x4A8];
    int f_5A4;
    char pad5A8[0x3F8];
    int f_9A0;
};

typedef struct Inner {
    struct Owner *owner;
    char pad4[0x18];
    unsigned int mask;
    unsigned int packed;
    unsigned int bits[2];
} Inner;

struct Obj {
    char pad0[0x45];
    unsigned char f45;
    char pad46[0x12];
    Inner *inner;
    char pad5C[8];
    unsigned int flags;
    char pad68[8];
    int f70;
};

extern Eff *D_001BE3E8;

extern Cell *func_0220C8(unsigned int row, int column);
extern int func_022110(unsigned int a0, int a1);
extern void func_022AC8(unsigned int row, int a, int column, int b);
extern unsigned int func_0225E0(unsigned int owner, int slot);
extern void func_022430(unsigned int row, unsigned int value, int column);
extern int func_12BBD8(char *object);
extern struct Spawn *func_12D3E0(int unused, struct Owner *owner);
extern void func_12BBA8(char *object, int value);
extern void func_021468(char *record, int wanted);
extern void func_073518(struct Obj *o, Eff *e, float a, float b, float c, float d, int e1, int e2, int e3, int e4, int e5, int e6);
extern void func_112E88(struct Owner *owner);

static __inline__ unsigned int *MaxP(unsigned int *a, unsigned int *b)
{
    return (*a < *b) ? b : a;
}

void func_17EE00(struct Obj *o, struct Owner *ctx)
{
    Inner *in;
    Cell *cell;
    Cell *other;
    struct Spawn *sp;
    unsigned int ch;
    unsigned int j;
    unsigned int idx;
    unsigned int v1;
    unsigned int v2;
    unsigned int bit;
    unsigned int bit2;
    unsigned int n;
    Eff *e;

    in = o->inner;
    for (ch = 2; ch < 16; ch++) {
        bit = 1 << ch;
        if ((in->mask & bit) != 0) {
            cell = func_0220C8(ch, ctx->f_F8);
            other = (Cell *)func_022110(ch, ctx->f_F8);
            func_022AC8(ch, 1, ctx->f_F8, 1);
            v1 = (in->packed << ((15 - ch) * 2)) >> 30;
            cell->f3C = *MaxP(&cell->f3C, &v1);
            v2 = other->f3C;
            cell->f40 = *MaxP(&cell->f40, &v2);
            for (j = 0; j < 3; j++) {
                idx = ch * 3 + j;
                n = idx >= 32;
                bit2 = 1 << (idx & 31);
                if (cell->slots[j] != 0 || (in->bits[n] & bit2) != 0) {
                    func_022430(ch, func_0225E0(ch, j), ctx->f_F8);
                }
            }
            if (ch == 2 && cell->f3C == 2 && ctx->f_9A0 == 2 && func_12BBD8((char *)ctx->f_5A4) == 0) {
                sp = func_12D3E0(ctx->f_5A4, ctx);
                if (sp != 0) {
                    func_12BBA8((char *)ctx->f_5A4, (int)sp);
                    *sp->slot = ctx;
                }
            }
            func_021468((char *)ctx, ch);
        }
    }
    e = D_001BE3E8;
    if (e != 0) {
        func_073518(o, e, e->v[0], e->v[1], e->v[2], e->v[3], 0, 0, 0, 0, 0, 1);
    }
    in->owner = ctx;
    o->f70 = 0;
    o->f45 = 3;
    o->flags |= 0x20;
    func_112E88(ctx);
}
