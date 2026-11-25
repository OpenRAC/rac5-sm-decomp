/* LEVEL_21:0x100690 -- placement copy of LEVEL_15_100690.c: squares the length of the mover's step vector, runs the sweep test with it and, when the test passes, hands the same vector to the follow-up test. */
extern float sqrtf(float x);

extern char *D_002ED174;
extern int D_002F3E14;

extern int func_0E1A68(float *a, float *b, float *v, float *w, float *x, float *y, float *p4, float *p5, float fa, float sum, float len);
extern int func_0DB440(void *p0, void *p1, void *p2, void *p4, void *p5, float fa, float fb, void *base, void *v, int tail);

unsigned char func_100690(void *p0, void *p1, float fa, float fb, void *p2, char *rec, float *p4, float *p5)
{
    float *v;
    char *base;
    float *pa;
    float *pb;
    float sum;
    float len;
    int ok;

    v = (float *)(rec - 0x180);
    base = D_002ED174;
    pa = (float *)(base + 0x34);
    pb = (float *)(base + 0x40);
    sum = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    len = fb * sqrtf(sum);
    if ((unsigned char)func_0E1A68(pa, pb, v, (float *)(rec - 0x174), (float *)(rec - 0x168), (float *)(rec - 0x15C), p4, p5, fa, sum, len) == 0) {
        ok = 0;
    } else {
        ok = func_0DB440(p0, p1, p2, p4, p5, fa, fb, base, v, D_002F3E14);
    }
    return ok;
}
