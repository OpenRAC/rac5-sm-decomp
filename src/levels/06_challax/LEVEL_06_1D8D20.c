/* LEVEL_06:0x1D8D20 -- placement copy of LEVEL_01_1E9DD8.c: sets up a record and steps along a segment, emitting normalised positions. */
extern float sqrtf(float x);
extern void func_1D8BF8(void *o, void *a);
extern void func_1D8C18(void *o, float *t, int z);

typedef struct {
    char pad0[0x14];
    int p1;
    int p0;
    float len;
    float pi;
    float f;
    int v;
    char pad1[4];
    int k;
} Rec;

void func_1D8D20(void *a, Rec *o, float *k, float *p1, float *p0, int v, float f)
{
    float d[3];
    int t;
    float ft;
    float inv;
    float r;
    float len;
    float l2;
    int n;
    int i;

    func_1D8BF8(o, a);
    o->v = v;
    o->pi = 3.1415927f;
    o->f = f;
    o->k = (int)k;
    o->p1 = (int)p1;
    o->p0 = (int)p0;
    o->len = 0.0f;
    d[0] = p0[0] - p1[0];
    d[1] = p0[1] - p1[1];
    d[2] = p0[2] - p1[2];
    l2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (l2 < 2.384185791015625e-07f) {
        len = o->len;
    } else {
        r = sqrtf(l2);
        inv = 1.0f / r;
        d[0] *= inv;
        d[1] *= inv;
        d[2] *= inv;
        len = r;
    }
    n = (int)(len * k[0]);
    for (i = 0; i < n; i++) {
        ft = (float)i / (float)n;
        t = *(int *)&ft;
        func_1D8C18(o, (float *)&t, 0);
    }
}
