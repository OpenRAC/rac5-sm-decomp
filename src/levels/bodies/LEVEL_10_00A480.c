extern void func_001EB8(void *a, void *b, void *c, float d, float e, float f);
extern int D_001F8254;

void f(void)
{
    int p = D_001F8254;

    func_001EB8((char *)p + 0x30, (char *)p + 0x2CC, (char *)p + 0x2F0,
        *(float *)(p + 0x30C), *(float *)(p + 0x318), *(float *)(p + 0x324));
}
