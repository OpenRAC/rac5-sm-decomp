/* USA LEVEL_08.REL:0x1CAB88, 136-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x38.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Target {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Target;

typedef struct Rec {
    char pad00[0x10];
    char *f10;
} Rec;

typedef struct Obj {
    char pad00[0x58];
    Rec *rec;
} Obj;

extern Target *D_0025207C;

extern void func_088940(Obj *o, Target *t, char *rec, float f0, float f1, int i0, float f2, int i1,
                        float f3, int i2, int i3, int i4);
extern void func_088AA8(char *record);
extern void func_21D048(Obj *o, void *arg);

void func_1CAB88(Obj *o, void *arg)
{
    Rec *rec = o->rec;
    Target *t;

    if (arg != 0) {
        t = D_0025207C;
        if (t != 0) {
            func_088940(o, t, (char *)rec + 0x10, t->f14, t->f18, 0, t->f1C, 0, t->f20, 0, 0, 1);
        }
    } else {
        func_088AA8(rec->f10);
    }
    func_21D048(o, arg);
}
