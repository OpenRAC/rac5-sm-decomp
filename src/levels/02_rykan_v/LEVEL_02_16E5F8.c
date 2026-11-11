/* LEVEL_02:0x16E5F8 -- writes count 4-float points on a circle around a centre. */
extern float cosf(float x);
extern float sinf(float x);

void func_16E5F8(int unused, float scale, const float *src, float *dst, unsigned int count, const float *center)
{
    unsigned int i;
    float tmp[4];

    for (i = 0; i < count; i++) {
        tmp[1] = 0.0f;
        tmp[0] = center[0] + scale * cosf(src[i]);
        tmp[2] = center[2] + scale * sinf(src[i]);
        dst[i * 4 + 0] = tmp[0];
        dst[i * 4 + 1] = tmp[1];
        dst[i * 4 + 2] = tmp[2];
        dst[i * 4 + 3] = tmp[3];
    }
}
