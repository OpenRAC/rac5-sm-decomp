/* LEVEL_05:0x1835E0 -- fills a frame with a random horizontal heading, an up axis, their cross product and a small random offset. */

extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern float D_00206D88[3];

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_1835E0(void *a0, float *p)
{
    float *up;
    float *dir;
    float angle;
    float z;
    float half;

    z = 0.0f;
    half = 0.5f;
    dir = p + 6;
    angle = (float)rand() * (1.0f / 2147483648.0f) * 2.0f * 3.1415927f;
    dir[0] = cosf(angle);
    dir[2] = sinf(angle);
    p[7] = z;
    up = p + 3;
    Copy3(up, D_00206D88);
    p[0] = up[1] * dir[2] - up[2] * dir[1];
    p[1] = up[2] * dir[0] - up[0] * dir[2];
    p[2] = up[0] * dir[1] - up[1] * dir[0];
    p[9] = dir[0];
    p[11] = dir[2];
    p[10] = (float)rand() * (1.0f / 2147483648.0f) * half + z;
    p[15] = z;
}
