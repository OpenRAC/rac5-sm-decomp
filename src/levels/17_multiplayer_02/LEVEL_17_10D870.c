/* LEVEL_17:0x10D870 -- forwards four floats of the global object to
   func_073C48. */
typedef struct Obj {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Obj;

typedef struct Level {
    char pad_00[0x58];
    Obj *f_58;
} Level;

extern Obj *D_1A8040;
extern void func_073C48(Level *l, Obj *o, int i0, int i1, int i2, int i3,
                        int i4, int i5, float f0, float f1, float f2, float f3);

void func_10D870(Level *a0)
{
    Obj *p = D_1A8040;

    if (p != 0) {
        func_073C48(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
}
