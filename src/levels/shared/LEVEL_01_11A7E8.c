/* LEVEL_01:0x11A7E8 -- ray versus sphere test returning the entry distance. */
extern float sqrtf(float x);

int func_11A7E8(float *out, float *p, float *d, float *c, float maxT, float r2)
{
    float dx = p[0] - c[0];
    float dy = p[1] - c[1];
    float dz = p[2] - c[2];
    float b = d[0] * dx + d[1] * dy + d[2] * dz;
    float cc = dx * dx + dy * dy + dz * dz;
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
