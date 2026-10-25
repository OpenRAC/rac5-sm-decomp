extern void func_002108(void *a, void *b, void *c, float d, float e, float f);
extern int D_001DE5D4;

void f(void)
{
    int p = D_001DE5D4;

    func_002108((char *)p + 0x30, (char *)p + 0x2CC, (char *)p + 0x2F0,
        *(float *)(p + 0x30C), *(float *)(p + 0x318), *(float *)(p + 0x324));
}
