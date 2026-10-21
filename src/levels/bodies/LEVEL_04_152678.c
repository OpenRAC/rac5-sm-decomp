/* LEVEL_04:0x152678 -- forwards four floats of the global object to
   func_083E30, with the level's own field block as third argument. */
typedef struct Obj {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Obj;

typedef struct Level {
    char pad_00[0x58];
    char *f_58;
} Level;

extern Obj *D_220914;
extern void func_083E30(Level *l, Obj *o, char *i0, int i1, int i2, int i3,
                        int i4, int i5, float f0, float f1, float f2, float f3);

void func_152678(Level *a0)
{
    Obj *p = D_220914;
    char *q = a0->f_58;

    if (p != 0) {
        func_083E30(a0, p, q + 0x58, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
}
