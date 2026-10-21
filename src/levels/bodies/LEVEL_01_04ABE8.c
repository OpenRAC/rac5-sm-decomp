void func_04ABE8(char *a0)
{
    float f1, f2, f0;
    if (*(int *)(a0 + 0x168) == 2) {
        f1 = *(float *)(a0 + 0x138);
        f2 = 0.0f;
        if (f2 < f1) {
            f0 = f1 - 0.001f;
            *(float *)(a0 + 0x138) = f0;
            if (f0 < f2)
                *(float *)(a0 + 0x138) = f2;
        }
    }
}
