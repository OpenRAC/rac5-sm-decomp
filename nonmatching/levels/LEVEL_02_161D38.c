/* USA LEVEL_02.REL:0x161D38, 116-byte candidate (14 November 2026).
 * Measured pinned: 6 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
/* LEVEL_02:0x161D38 -- puts the object in mode 1, sets its flag, and when the global target exists runs the four-float start helper on it. */
typedef struct Target {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Target;

typedef struct Obj {
    char pad00[0x45];
    unsigned char mode;
    unsigned char sub;
    char pad47[0x64 - 0x47];
    unsigned int flags;
    char pad68[0x70 - 0x68];
    int f70;
} Obj;

extern Target *D_003AAE30;
extern void func_0872A0(Obj *o, Target *t, int i0, int i1, int i2, int i3, int i4, int i5,
                        float f0, float f1, float f2, float f3);

int func_161D38(Obj *o)
{
    Target *t;

    o->flags |= 0x20;
    o->sub = 0;
    o->f70 = 0;
    t = D_003AAE30;
    o->mode = 1;
    if (t != 0) {
        func_0872A0(o, t, 0, 0, 0, 0, 0, 1, t->f14, t->f18, t->f1C, t->f20);
    }
    return 1;
}
