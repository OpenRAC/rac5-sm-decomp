extern void func_002108(void *a, void *b, void *c, float d, float e, float f);
extern int D_00203554;

void f(void)
{
    int p = D_00203554;

    func_002108((char *)p + 0x30, (char *)p + 0x2CC, (char *)p + 0x2F0,
                *(float *)(p + 0x30C), *(float *)(p + 0x318),
                *(float *)(p + 0x324));
}
