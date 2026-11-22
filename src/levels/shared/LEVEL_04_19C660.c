/* LEVEL_04:0x19C660 -- tests whether a point lies in front of the frame, within 0.75 of two units height and within 1.5 sideways. */
static __inline__ void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

int func_19C660(float *m, float *p)
{
    float d[3];

    Sub3(d, p, m + 12);
    if (Dot3(d, m + 8) <= 0.0f) {
        return 0;
    }
    if (__builtin_fabsf(d[1] - 2.0f) > 0.75f) {
        return 0;
    }
    if (__builtin_fabsf(Dot3(m, d)) < 1.5f) {
        return 1;
    }
    return 0;
}
