extern float func_160E40(int a0);

void func_160EB8(char *a0, int a1)
{
    if (*(int *)(*(char **)(a0 + 0x40) + 0x24) == 0xECFD0651) {
        char *s0 = *(char **)(a0 + 0x58);
        float f = func_160E40(a1);

        *(float *)(s0 + 0x2C) = f;
        if (f != -1.0f) {
            *(int *)(s0 + 8) = a1;
            *(char *)(s0 + 0x4C) = 1;
        }
    }
}
