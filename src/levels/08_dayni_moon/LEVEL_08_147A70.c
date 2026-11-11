/* LEVEL_08:0x147A70 -- forwards four floats of the global object to
   func_088940 and sets a flag bit on the level object. */
typedef struct Obj {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
    char pad_24[0x34];
    int i_58;
} Obj;

typedef struct Level {
    char pad_00[0x58];
    Obj *f_58;
} Level;

extern Obj *D_24FF90;
extern void func_088940(Level *l, Obj *o, int i0, int i1, int i2, int i3,
                        int i4, int i5, float f0, float f1, float f2, float f3);

void func_147A70(Level *a0)
{
    Obj *p = D_24FF90;
    Obj *q = a0->f_58;

    if (p != 0) {
        func_088940(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
    q->i_58 |= 1;
}
