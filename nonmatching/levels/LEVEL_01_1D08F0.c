/* LEVEL_01.REL:0x1D08F0: reviewed 408-byte candidate, held for ABI review.
 * Updates the fade state of the overlay object.
 * pinned C with gnu-ee-trial links 408/408 bytes and is byte-exact at this and
 * 12 other USA placements, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0x270];
    float f270;
} Scene;

typedef struct {
    char pad0[0x64];
    int f64;
} Obj;

typedef struct {
    Obj *p;
    float f4;
    float f8;
    int fC;
    unsigned char f10;
} Fade;

extern Scene D_00235140;
extern Fade D_003988F8;

extern float fabsf(float x);
extern void func_1D0E18(int a);
extern void func_158AB0(Obj *o);
extern Obj *func_158958(Scene *s, float f);
extern void func_1D0A88(Scene *s);

static __inline__ unsigned char IsSmall(float x)
{
    if (!(fabsf(x) <= 1e-5f)) {
        return 0;
    }
    return 1;
}

void func_1D08F0(void)
{
    Scene *s = &D_00235140;
    Fade *g;
    int m;

    if (IsSmall(s->f270)) {
        func_1D0E18(0);
    } else {
        func_1D0E18(1);
    }
    if (D_003988F8.p != 0) {
        if ((D_003988F8.p->f64 & 0xF) == 1) {
            func_158AB0(D_003988F8.p);
        }
    }
    g = &D_003988F8;
    m = g->fC;
    if (m != 0) {
        if (m == 1) {
            g->f8 -= 0.10000000894069672f;
            if (g->f8 < 0.0f) {
                g->f8 = 0.0f;
            }
            g->f4 -= 1.0f;
            if (g->f4 <= 0.0f || g->f10 == 0) {
                g->f4 = 30.0f;
                g->f10 = m;
                g->p = func_158958(s, 25.0f);
            }
            func_1D0A88(s);
        }
    } else {
        g->f8 += 0.10000000894069672f;
        if (g->f8 > 1.0f) {
            g->f8 = 1.0f;
        }
        if (g->f8 != 1.0f) {
            func_1D0A88(s);
        }
    }
}
