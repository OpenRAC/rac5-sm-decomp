/* LEVEL_04:0x13D8E8 -- forwards four floats of the global object to
   func_083E30. */
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

extern Obj *D_22034C;
extern void func_083E30(Level *l, Obj *o, int i0, int i1, int i2, int i3,
                        int i4, int i5, float f0, float f1, float f2, float f3);

void func_13D8E8(Level *a0)
{
    Obj *p = D_22034C;

    if (p != 0) {
        func_083E30(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
}
