extern void *D_00143EB0;

void func_000C50(float *delta)
{
    float *p = (float *)((char *)D_00143EB0 + 0x30);

    p[0] += delta[0];
    p[1] += delta[1];
    p[2] += delta[2];
}
