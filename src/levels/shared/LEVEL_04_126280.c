/* LEVEL_04:0x126280 -- ray versus circle test returning the entry distance. */
extern float sqrtf(float x);

int func_126280(float *out, float *p, float *d, float *c, float maxT, float r2)
{
    float dx = p[0] - c[0];
    float dy = p[1] - c[1];
    float b = d[0] * dx + d[1] * dy;
    float cc = dx * dx + dy * dy;
    float disc = b * b + r2 - cc;
    float s, t;
    if (disc < 0.0f)
        return 0;
    s = sqrtf(disc);
    t = -s - b;
    if (maxT < t)
        return 0;
    if (t >= 0.0f) {
        *out = t;
        return 1;
    }
    if (!(b <= s))
        return 0;
    *out = 0.0f;
    return 1;
}
