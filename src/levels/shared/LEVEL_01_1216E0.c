/* LEVEL_01:0x1216E0 -- fills a 2x2 matrix with the exponential of a damped system for time c. */
extern float sqrtf(float x);
extern float expf(float x);

void func_1216E0(float *m, float a, float b, float c)
{
    float s, p, q, inv, ep, eq, t, u;
    float ns;

    s = sqrtf(b * b + a * a * 4.0f);
    ns = -s;
    q = (ns + b) * 0.5f;
    p = (ns - b) * 0.5f;
    inv = 1.0f / (p - q);
    eq = expf(q * c);
    ep = expf(p * c);
    t = (ep - eq) * inv;
    u = (p * ep - q * eq) * inv;
    m[1] = t;
    m[3] = u;
    m[0] = eq - q * t;
    m[2] = q * (eq - u);
}
