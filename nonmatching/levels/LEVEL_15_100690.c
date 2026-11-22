/* USA LEVEL_15.REL:0x100690 (21 November 2026): exact linked bytes under gnu-
 * ee-trial-divpad, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0DB440 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern float sqrtf(float x);

extern char *D_002ED174;
extern int D_002F3E14;

extern int func_0E1A68(char * a, char * b, float * v, float * w, float * x, float * y, int p4, int p5, float fa, float sum, float len);
extern int func_0DB440(int p0, int p1, int p2, int p4, int p5, float fa, float fb, char * base, float * v, int tail);

unsigned char func_100690(int p0, int p1, float fa, float fb, int p2, char *rec, int p4, int p5)
{
    float *v;
    char *base;
    char *pa;
    char *pb;
    float sum;
    float len;
    int ok;

    v = (float *)(rec - 0x180);
    base = D_002ED174;
    pa = base + 0x34;
    pb = base + 0x40;
    sum = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    len = fb * sqrtf(sum);
    if ((unsigned char)func_0E1A68(pa, pb, v, (float *)(rec - 0x174), (float *)(rec - 0x168), (float *)(rec - 0x15C), p4, p5, fa, sum, len) == 0) {
        ok = 0;
    } else {
        ok = func_0DB440(p0, p1, p2, p4, p5, fa, fb, base, v, D_002F3E14);
    }
    return ok;
}
