/* USA LEVEL_01.REL:0x04E6D8, 208-byte candidate (21 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x94.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj {
    char pad_000[0x30];
    float pos[3];
    char pad_3C[0x108 - 0x3C];
    short s108;
    short s10A;
    char pad_10C[0x53C - 0x10C];
    int w53C;
    char pad_540[4];
    int w544;
    int w548;
    int w54C;
    int w550;
    float saved[3];
    char pad_560[4];
    int w564;
    int w568;
    char pad_56C[0x9A0 - 0x56C];
    int mode;
} Obj;

extern int D_001F478C;
extern int D_00238C30[30];
extern void func_023BC8(Obj *o, int a);
extern void func_04DA70(Obj *o, int a, int b, int c, float f0, float f1);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_04E6D8(Obj *o)
{
    unsigned int i;

    o->s108 = 1;
    o->s10A = 1;
    o->w53C = 1;
    o->w544 = 0;
    o->w548 = 0;
    o->w54C = 0;
    o->w550 = 0;
    o->w564 = 0;
    o->w568 = 0;
    if (o->mode != 1) {
        func_023BC8(o, 1);
    }
    Copy3(o->saved, o->pos);
    func_04DA70(o, 0x15, 0, 1, 0.2f, 0.0f);
    D_001F478C = 0;
    for (i = 0; i < 30; i++) {
        D_00238C30[i] = 0;
    }
}
