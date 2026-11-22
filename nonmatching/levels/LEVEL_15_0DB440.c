/* USA LEVEL_15.REL:0x0DB440 (21 November 2026): exact linked bytes under gnu-
 * ee-trial-divpad, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_15_1044A8.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern float sqrtf(float x);
extern char *func_0DB238(char *buf, int a, int b, int c, int d, int e, int f);
extern void func_0EA938(float *out, int f, char *res);

int func_0DB440(int a, int b, float *v, int c, int d, int e, int f)
{
    char buf[16];
    char *r;
    float len;
    float k;

    r = func_0DB238(buf, a, b, c, d, e, f);
    if (r == 0) {
        return 0;
    }
    func_0EA938(v, f, r + 8);
    len = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    k = 1.0f / len;
    v[0] = k * v[0];
    v[1] = k * v[1];
    v[2] = k * v[2];
    return 1;
}
