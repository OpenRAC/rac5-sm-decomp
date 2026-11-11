extern void func_047C30(float a, float b, void *obj, int c, int d, int e);
extern float D_1A37C0;
extern float D_1CE2B8[];

void func_04B8C8(char *obj)
{
    float v;
    float *src;
    float *dst1;
    float *dst2;
    float *g;

    *(int *)(obj + 0xC6C) = 0;
    *(short *)(obj + 0x108) = 0;
    *(short *)(obj + 0x10A) = 0;
    D_1A37C0 = 0.0f;
    v = D_1A37C0;
    func_047C30(0.125f, v, obj, 0, 0, 1);
    src = (float *)(obj + 0x30);
    dst1 = (float *)(obj + 0xC4C);
    dst2 = (float *)(obj + 0xC5C);
    g = D_1CE2B8;
    dst1[0] = src[0];
    dst1[1] = src[1];
    dst1[2] = src[2];
    dst1[3] = src[3];
    *(float *)(obj + 0xC70) = v;
    dst2[0] = g[0];
    dst2[1] = g[1];
    dst2[2] = g[2];
    dst2[3] = g[3];
}
