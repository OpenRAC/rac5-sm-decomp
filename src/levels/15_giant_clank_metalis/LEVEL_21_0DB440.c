/* LEVEL_21:0x0DB440 -- placement copy of LEVEL_15_0DB440.c: runs the lookup helper and, when it succeeds, fills the given vector from its result and normalises it; returns 1, or 0 when the lookup fails. */
extern float sqrtf(float x);
extern char *func_0DB238(char *buf, void *a0, void *a1, void *p5, void *p6, float f12, float f13, void *body, void *o, int tail);
extern void func_0EA938(float *out, void *m, char *res);

int func_0DB440(void *a0, void *a1, float *v, void *p5, void *p6, float f12, float f13, void *body, void *o, int tail)
{
    char buf[16];
    char *r;
    float len;
    float k;

    r = func_0DB238(buf, a0, a1, p5, p6, f12, f13, body, o, tail);
    if (r == 0) {
        return 0;
    }
    func_0EA938(v, o, r + 8);
    len = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    k = 1.0f / len;
    v[0] = k * v[0];
    v[1] = k * v[1];
    v[2] = k * v[2];
    return 1;
}
