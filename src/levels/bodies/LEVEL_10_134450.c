/* LEVEL_10:0x134450 -- forwards four floats of the global object to
   func_081000 and sets a flag bit on the level object. */
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

extern Obj *D_20FD30;
extern void func_081000(Level *l, Obj *o, int i0, int i1, int i2, int i3,
                        int i4, int i5, float f0, float f1, float f2, float f3);

void func_134450(Level *a0)
{
    Obj *p = D_20FD30;
    Obj *q = a0->f_58;

    if (p != 0) {
        func_081000(a0, p, 0, 0, 0, 0, 0, 1,
                    p->f_14, p->f_18, p->f_1C, p->f_20);
    }
    q->i_58 |= 1;
}
