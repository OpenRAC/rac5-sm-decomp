/* LEVEL_16:0x167DB0 -- advances an object's timer by a short look-ahead test, else marks it done. */

extern int func_01E480(float *a, float *b, float *c, int d, int e, float f);

static inline void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_167DB0(char *a0, float f12)
{
    float tmp[8];
    float ahead[4];
    float hit[4];
    float k;

    k = f12 * 0.2f;
    Copy3(ahead, (float *)(a0 + 0x30));
    ahead[1] = ahead[1] + k;
    if (func_01E480(hit, tmp, ahead, 0x38, 0, 0.7f) != 0) {
        *(float *)(a0 + 0x34) = *(float *)(a0 + 0x34) + 1.0f;
    } else {
        a0[0x45] = 1;
    }
}
