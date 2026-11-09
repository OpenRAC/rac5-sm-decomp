/* LEVEL_15:0x11D478 -- builds a scaled 4-float vector from a record unless a probe succeeds, then calls a dispatch helper. */

extern int func_066E40(float *o, char *a3);
extern void func_11D218(char *a0, int a1, int a2, char *a3, int a4, float *t1, float *t2, float f12, float f13);

void func_11D478(char *a0, int a1, int a2, char *a3)
{
    char *s0;
    char *q;
    float *src;
    float vec[4];

    s0 = *(char **)(a3 + 4);
    if (func_066E40(vec, a3) == 0) {
        q = *(char **)(s0 + 0x1C);
        src = (float *)(q + 0xE0);
        vec[0] = src[0] * 0.01f;
        vec[1] = src[1] * 0.01f;
        vec[2] = src[2] * 0.01f;
        vec[3] = *(float *)(q + 0xEC) * 0.01f;
    }
    func_11D218(a0, a1, a2, s0, 0, vec, vec, vec[3], 0.0f);
}
