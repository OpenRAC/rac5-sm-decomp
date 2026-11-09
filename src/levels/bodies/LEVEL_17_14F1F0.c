/* LEVEL_17:0x14F1F0 -- builds a lifted copy of the object position, runs a helper, then adjusts the height. */

extern int func_01DE00(float *a, float *b, float *c, int d, int e, float f);

static inline void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_14F1F0(char *o, float delta)
{
    float tmp[8];
    float ahead[4];
    float hit[4];

    Copy3(ahead, (float *)(o + 0x30));
    ahead[1] = ahead[1] + 0.2f;
    if (func_01DE00(hit, tmp, ahead, 0x38, 0, 1.2f) != 0) {
        *(float *)(o + 0x34) = *(float *)(o + 0x34) + delta;
    } else {
        o[0x45] = 0;
    }
}
