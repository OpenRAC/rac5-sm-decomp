extern void *D_000FD3B4;

void func_000D20(float *delta)
{
    float *p = (float *)((char *)D_000FD3B4 + 0x30);

    p[0] += delta[0];
    p[1] += delta[1];
    p[2] += delta[2];
}
