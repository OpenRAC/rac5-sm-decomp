/* LEVEL_15:0x0FD8B0 -- rescales a pair of vectors by a float factor, writes two results into a0, and calls a helper. */

extern void func_0E9C78(char *a0, char *a1, float f);

void func_0FD8B0(char *a0, char *s0, float k)
{
    char *s1;
    float *rows;
    float *dir;
    float *out;
    float f20;
    float f0;
    float f1;

    s1 = *(char **)s0;
    rows = (float *)(s1 + 0x10);
    f20 = rows[0] * *(float *)(s0 + 4) + rows[1] * *(float *)(s0 + 8);
    f0 = rows[2] * *(float *)(s0 + 4) + rows[3] * *(float *)(s0 + 8);
    *(float *)(s0 + 4) = f20;
    *(float *)(s0 + 8) = f0;
    f20 = f20 * k;
    func_0E9C78(a0, s0 + 0xC, *(float *)(s1 + 4) * f20);
    dir = (float *)(s0 + 0x18);
    out = (float *)(a0 + 0x24);
    f1 = *(float *)s1 * f20;
    out[0] = f1 * dir[0];
    out[1] = f1 * dir[1];
    out[2] = f1 * dir[2];
}
