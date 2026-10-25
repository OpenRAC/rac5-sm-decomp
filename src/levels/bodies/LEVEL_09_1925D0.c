extern void func_192BA0(void *a0, int a1);

void func_1925D0(char *a0)
{
    char *v1 = *(char **)(a0 + 0x54);
    char *v0 = *(char **)(a0 + 0x58);
    int x = *(int *)v0;
    float f = *(float *)(v1 + 0x18) - 1.0f;

    *(float *)(v1 + 0x18) = f;
    if (f <= 0.0f)
        func_192BA0(a0, x);
}
