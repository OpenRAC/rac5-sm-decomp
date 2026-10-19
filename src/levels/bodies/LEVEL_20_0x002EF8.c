extern void *D_000FD3C4;

void func_002EF8(float *delta)
{
    float *p = (float *)((char *)D_000FD3C4 + 0x1A4);

    p[0] += delta[0];
    p[1] += delta[1];
    p[2] += delta[2];
}
