/* LEVEL_04.REL:0x0326E0: reviewed 216-byte candidate, held for ABI review.
 * Picks a animation index from a signed input and applies it with a blended
 * weight.
 * gnu-ee-trial C with gnu-ee-trial links 216/216 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * Another placement of the same form conflicts with an accepted prototype, so
 * the whole form is held.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    float f0, f4, f8, fC;
    unsigned char c10, c11, c12;
} Tab;
typedef struct {
    char pad0[0x48];
    float *blend;
} Obj;
extern float fabsf(float x);
extern void func_080188(Obj *o, int a, int b, int c, float t, float u);

void func_0326E0(float *in, Obj *o, unsigned char *cur, float *scale, int tab)
{
    float k;
    int code;
    Tab *t = (Tab *)tab;
    float x = in[0];

    if (fabsf(x) <= t->f8) {
        k = 1.0f;
        code = t->c12;
    } else if (x > 0.0f) {
        k = t->f0 * x / scale[0];
        code = t->c10;
    } else {
        k = t->f4 * x / scale[1];
        code = t->c11;
    }
    if (code != *cur) {
        func_080188(o, code, 0, 1, t->fC, 0.0f);
        *cur = code;
    }
    o->blend[2] = k;
}
