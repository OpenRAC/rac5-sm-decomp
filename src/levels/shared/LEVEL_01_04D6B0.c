void func_04D6B0(char *a0, float a1)
{
    float t0, t1, t2;
    t0 = *(float *)(a0 + 0x578) + a1;
    t1 = *(float *)(a0 + 0x57C) + a1;
    t2 = *(float *)(a0 + 0x580) + a1;
    *(float *)(a0 + 0x578) = t0;
    *(float *)(a0 + 0x57C) = t1;
    *(float *)(a0 + 0x580) = t2;
}
