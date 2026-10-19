extern void *D_0019BE4C;

void func_000D60(float *delta)
{
    float *p = (float *)((char *)D_0019BE4C + 0x30);

    p[0] += delta[0];
    p[1] += delta[1];
    p[2] += delta[2];
}
