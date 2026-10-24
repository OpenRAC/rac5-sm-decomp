extern void func_001D00(void *a, void *b, void *c, float d, float e, float f);
extern int D_0018E2DC;

void f(void)
{
    int p = D_0018E2DC;

    func_001D00((char *)p + 0x30, (char *)p + 0x2CC, (char *)p + 0x2F0,
        *(float *)(p + 0x30C), *(float *)(p + 0x318), *(float *)(p + 0x324));
}
