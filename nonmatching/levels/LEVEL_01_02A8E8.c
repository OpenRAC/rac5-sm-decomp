/* USA LEVEL_01.REL:0x02A8E8, 920-byte candidate (22 November 2026).
 * Measured gnu-ee-trial-divpad: 7 differing words; first difference at 0x7C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);
extern float atan2f(float y, float x);
extern float fabsf(float x);

static __inline__ float Clamp(float v, float *r)
{
    float *res;
    float *hi;

    res = &v;
    hi = r + 1;
    if (v < r[0])
        res = r;
    else if (r[1] < v)
        res = hi;
    return *res;
}

static __inline__ int IsSmall(float v)
{
    int r = 1;

    if (!(fabsf(v) <= 9.999999747378752e-06f))
        r = 0;
    return r;
}

static __inline__ float Norm2(float *v)
{
    float d2;
    float len;
    float inv;
    float x;
    float z;

    d2 = v[0] * v[0] + v[1] * v[1];
    if (d2 < 2.384185791015625e-07f)
        return 0.0f;
    len = sqrtf(d2);
    inv = 1.0f / len;
    x = v[0];
    z = v[1];
    v[1] = inv * z;
    v[0] = inv * x;
    return len;
}

void func_02A8E8(float *p, float *q, float *t)
{
    float dir[2];
    float dist;
    float ang;
    float dd;
    float da;
    float db;
    float a;
    float a1;
    float a2;
    float a3;
    float a4;
    float b1;
    float b2;
    float b3;
    float b4;
    unsigned char small;
    float *c1;
    float *c2;
    float *c3;

    dir[0] = q[0] - p[0];
    dir[1] = q[2] - p[1];
    dist = Norm2(dir);
    ang = p[2];
    dd = dist - p[3];
    small = IsSmall(dist);
    if (!small)
        ang = atan2f(dir[1], dir[0]);
    da = ang - p[2];
    if (da > 3.1415927410125732f)
        da -= 6.2831854820251465f;
    else if (da < -3.1415927410125732f)
        da += 6.2831854820251465f;
    db = da - p[5];
    p[3] = Clamp(dist, t);
    p[4] = Clamp(dd, t + 4);
    p[5] = Clamp(da, t + 8);
    p[6] = Clamp(db, t + 12);
    c1 = t + 4;
    c2 = t + 8;
    c3 = t + 12;
    a1 = (p[11] + p[7] * t[2]) * t[3];
    b1 = a1 + p[7] * t[3];
    p[11] = a1 - b1 * t[2];
    p[7] = b1;
    a2 = (p[12] + p[8] * c1[2]) * c1[3];
    b2 = a2 + p[8] * c1[3];
    p[12] = a2 - b2 * c1[2];
    p[8] = b2;
    a3 = (p[13] + p[9] * c2[2]) * c2[3];
    b3 = a3 + p[9] * c2[3];
    p[13] = a3 - b3 * c2[2];
    p[9] = b3;
    a4 = (p[14] + p[10] * c3[2]) * c3[3];
    b4 = a4 + p[10] * c3[3];
    p[14] = a4 - b4 * c3[2];
    p[10] = b4;
    p[0] = q[0];
    a = q[2];
    p[2] = ang;
    p[1] = a;
}
