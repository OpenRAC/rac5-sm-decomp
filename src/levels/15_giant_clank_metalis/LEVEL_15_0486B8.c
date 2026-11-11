/* LEVEL_15:0x0486B8 -- placement copy of LEVEL_01_057428.c: blends five floats from one of three tables by a per-lane coefficient. */
extern float D_001630E8[];

void func_0486B8(float *dst, char *base, float *coef, int count)
{
    char *alt = base + 0xCFC;
    float *src = (float *)(base + 0xD10);
    int i;

    for (i = 0; i < 5; i++) {
        float weight;
        float value;

        if (i >= count) {
            value = src[i];
        } else {
            weight = coef[i];
            if (weight == 0.0f)
                value = src[i];
            else if (weight == -1000.0f)
                value = *(float *)(alt + (i << 2));
            else
                value = *(float *)((char *)D_001630E8 + i * 4) * weight;
        }
        dst[i] = value;
    }
}
