extern void func_07E7F0(void *a0, int a1);

void func_1AD728(char *a0, float d)
{
    float f = *(float *)(a0 + 0x70) - d;

    *(float *)(a0 + 0x70) = f;
    if (f <= 0.0f)
        func_07E7F0(a0, 1);
}
