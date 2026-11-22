/* USA LEVEL_18.REL:0x160A38, 428-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 27 differing words; first difference at 0xAC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);
extern void func_160C20(void *o, void *a);
extern void func_160C40(void *o, float *t, int z);

typedef struct {
    int p1;
    int p0;
    float len;
    int v;
    int f;
} Seg;

typedef struct {
    char pad0[0x14];
    Seg s;
} Rec;

void func_160A38(float k, Rec *o, void *a, float *p1, float *p0, int v, int f)
{
    float d[3];
    int t;
    float ft;
    float inv;
    float step;
    float r;
    float len;
    float l2;
    int n;
    int i;
    Seg *sg;

    func_160C20(o, a);
    sg = &o->s;
    sg->v = v;
    sg->p1 = (int)p1;
    sg->f = f;
    sg->p0 = (int)p0;
    sg->len = 0.0f;
    d[0] = p0[0] - p1[0];
    d[1] = p0[1] - p1[1];
    d[2] = p0[2] - p1[2];
    l2 = d[0] * d[0] + d[1] * d[1] + d[2] * d[2];
    if (l2 < 2.384185791015625e-07f) {
        len = sg->len;
    } else {
        r = sqrtf(l2);
        inv = 1.0f / r;
        d[0] *= inv;
        d[1] *= inv;
        d[2] *= inv;
        len = r;
    }
    n = (int)(len * k) + 1;
    if (n < 1)
        n = 1;
    step = 1.0f / (float)n;
    for (i = 0; i <= n; i++) {
        ft = (float)i * step;
        t = *(int *)&ft;
        func_160C40(o, (float *)&t, 0);
    }
}
