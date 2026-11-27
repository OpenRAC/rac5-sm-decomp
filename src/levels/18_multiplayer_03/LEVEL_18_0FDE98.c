/* LEVEL_18:0x0FDE98 -- placement copy of LEVEL_01_11F2A0.c: finds the earliest non-negative root of the moving-point quadratic within a time limit and stores it; returns 1 when a root exists. */
extern int func_100C08(float a, float b, float c, float d, float *roots);

int func_0FDE98(float maxT, float r, float *out, float *p, float *d, float *v, float *c)
{
    float roots[4];
    int i;
    int n;
    float qz;
    float pd;
    float vv;
    float vy;
    float best;
    float dd;
    float vz;
    float qy;
    float qx;
    float qq;
    float vx;
    float qv;
    float dx;
    float dz;
    float t;
    float dy;
    float dv;
    float rr;
    float k;

    qx = p[0] - c[0];
    qy = p[1] - c[1];
    qz = p[2] - c[2];
    vv = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    dv = d[0] * v[0] + d[1] * v[1] + d[2] * v[2];
    qv = qx * v[0] + qy * v[1] + qz * v[2] + (d[0] * d[0] + d[1] * d[1] + d[2] * d[2]);
    pd = qx * d[0] + qy * d[1] + qz * d[2];
    pd = pd + pd;
    qq = qx * qx + qy * qy + qz * qz - r * r;
    k = (1.0f / vv) * 4.0f;
    n = func_100C08(k * dv, k * qv, k * pd, k * qq, roots);
    best = 1e+30f;
    for (i = 0; i < n; i++) {
        t = roots[i];
        if (0.0f <= t && t <= maxT && t < best) {
            best = t;
        }
    }
    if (best == 1e+30f) {
        return 0;
    }
    *out = best;
    return 1;
}
