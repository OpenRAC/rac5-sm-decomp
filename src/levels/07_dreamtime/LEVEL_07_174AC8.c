void func_174AC8(char *a0, float v)
{
    char *p = *(char **)(a0 + 0x58);
    float old = *(float *)(p + 0x20);
    float f14 = *(float *)(p + 0x14);

    *(float *)(p + 0x20) = v;
    *(float *)(p + 0x14) = f14 + (v - old);
}
