/* LEVEL_05:0x12CDE0 -- forwards four floats of the global object to
   func_07E070. */
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

extern Obj *D_1F5FAC;
extern void func_07E070(Level *l, Obj *o, int i0, int i1, int i2, int i3,
                        int i4, int i5, float f0, float f1, float f2, float f3);

void func_12CDE0(Level *a0)
{
    Obj *p = D_1F5FAC;

    if (p != 0) {
        func_07E070(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
}
