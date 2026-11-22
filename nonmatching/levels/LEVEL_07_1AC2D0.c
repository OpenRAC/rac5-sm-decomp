/* USA LEVEL_07.REL:0x1AC2D0 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0EC878 unlike its accepted definition; and declares func_1AD010 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Target {
    char pad00[0x77];
    unsigned char b77;
} Target;

typedef struct {
    int w00;
    int w04;
    Target *w08;
    int w0C;
    char pad10;
    unsigned char b11;
} Rec;

typedef struct {
    char pad00[4];
    float f04;
    int w08;
    char pad0C[0x10];
    int w1C;
} St;

typedef struct {
    char pad00[0x40];
    int w40;
    char pad44[0x10];
    Rec *rec;
    St *st;
    char pad5C[0x10];
    int w6C;
    char pad70[6];
    unsigned char b76;
    unsigned char b77;
} Obj;

extern int D_0021B094;
extern int D_003ACA58[1];
extern int func_0EC878(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0);
extern void func_1AAE88(void (*cb)(void), int a1, int a2, int a3);
extern void func_1AD010(void);

int func_1AC2D0(Obj *o)
{
    Rec *r = o->rec;
    St *st = o->st;
    int a;
    int b;
    int c;
    int d;
    int ta;
    int tb;
    int td;
    int ok;

    a = r->w00;
    if (a != 0) {
        ta = D_0021B094 + a;
        if (*(int *)(ta + 0x40) == 0) {
            r->w00 = 0;
        } else {
            r->w00 = ta;
        }
    }
    b = r->w0C;
    if (b != 0) {
        tb = D_0021B094 + b;
        if (*(int *)(tb + 0x40) == 0) {
            r->w0C = 0;
        } else {
            r->w0C = tb;
        }
    }
    o->b76 = 0x1E;
    o->w6C = 0xFF0000FF;
    o->b77 = 0x1E;
    c = r->w04;
    if (c != 0) {
        r->w04 = D_0021B094 + c;
    }
    d = r->w08;
    if (d == 0) {
        ok = 0;
    } else {
        td = D_0021B094 + d;
        if (*(int *)(td + 0x40) == 0) {
            r->w08 = 0;
            ok = 0;
        } else {
            r->w08 = (Target *)td;
            ok = 1;
        }
    }
    if (ok) {
        r->w08->b77 = o->b77;
    }
    if (r->b11 == 1) {
        if (r->w00 == 0) {
            return 0;
        }
        st->w08 = 0;
        st->f04 = 0.16666667f;
    } else {
        if (r->w08 != 0 && r->w0C == 0) {
            return 0;
        }
        if (r->w00 == 0) {
            return 0;
        }
    }
    D_003ACA58[0] = func_0EC878(0xC, 0, 0, 0, 3);
    func_1AAE88(func_1AD010, 0, o->w40, 0);
    st->w1C = 0;
    return 1;
}
