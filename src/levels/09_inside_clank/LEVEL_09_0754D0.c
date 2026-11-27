/* LEVEL_09:0x0754D0 -- placement copy of LEVEL_01_0789C8.c: sweeps a ray along a direction; on a hit reports the hit point and the normalised surface normal. */
extern float sqrtf(float x);
extern int func_0200D0(float len, float *t, float *n, float *from, float *d, int a, int b, int c);

static __inline__ float Normalize3(float *v)
{
    float len2;
    float r0;
    float inv;

    len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (len2 < 2.384185791015625e-07f) {
        return 0.0f;
    }
    r0 = sqrtf(len2);
    inv = 1.0f / r0;
    v[0] *= inv;
    v[1] *= inv;
    v[2] *= inv;
    return r0;
}

int func_0754D0(float *hit, float *nrm, float *from, float *dir)
{
    float d[3];
    struct {
        float n[4];
        float p[4];
        float t;
    } hr;
    float len;
    int r;

    d[0] = dir[0];
    d[1] = dir[1];
    d[2] = dir[2];
    len = Normalize3(d);
    r = func_0200D0(len, &hr.t, hr.n, from, d, 0x68, 0, 0);
    if (r != 0) {
        hit[0] = from[0] + d[0] * hr.t;
        hit[1] = from[1] + d[1] * hr.t;
        hit[2] = from[2] + d[2] * hr.t;
        nrm[0] = hr.n[0];
        nrm[1] = hr.n[1];
        nrm[2] = hr.n[2];
        Normalize3(nrm);
        return 1;
    }
    return 0;
}
