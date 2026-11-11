/* LEVEL_01:0x1BB270 -- fetches a position, and returns 1 when its squared distance to the object is within a limit. */
extern void func_01A2A0(float *a);
extern int func_084708(char *a, float *b);

static inline void Sub3(float *out, float *a, float *b)
{
    out[0] = a[0] - b[0];
    out[1] = a[1] - b[1];
    out[2] = a[2] - b[2];
}

int func_1BB270(char *o)
{
    float buf[3];
    float d[3];
    char *s1;
    float lim;

    s1 = *(char **)(o + 0x54);
    func_01A2A0(buf);
    if (func_084708(*(char **)(s1 + 0x34), buf) == 0) {
        return 0;
    }
    Sub3(d, buf, (float *)(o + 0x30));
    lim = *(float *)(s1 + 0x40);
    if (d[0] * d[0] + d[1] * d[1] + d[2] * d[2] <= lim * lim) {
        return 1;
    }
    return 0;
}
