/* USA LEVEL_01.REL:0x11F2A0, 428-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 7 differing words; first difference at 0x7C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int func_122928(float a, float b, float c, float d, float *roots);

int func_11F2A0(float maxT, float r, float *out, float *p, float *d, float *v, float *c)
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
    vx = v[0];
    vy = v[1];
    dy = d[1];
    vz = v[2];
    qy = p[1] - c[1];
    rr = r * r;
    vv = vx * vx + vy * vy + vz * vz;
    dx = d[0];
    dz = d[2];
    qz = p[2] - c[2];
    qq = qx * qx + qy * qy + qz * qz;
    dd = dx * dx + dy * dy + dz * dz;
    dv = dx * vx + dy * vy + dz * vz;
    qv = qx * vx + qy * vy + qz * vz;
    k = (1.0f / vv) * 4.0f;
    pd = qx * dx + qy * dy + qz * dz;
    n = func_122928(k * dv, k * (qv + dd), k * (pd + pd), k * (qq - rr), roots);
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
