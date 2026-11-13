extern void func_19D370(void *a0, char *a1);

void func_19CDA0(char *a0)
{
    char *v1 = *(char **)(a0 + 0x54);
    char *v0 = *(char **)(a0 + 0x58);
    char *x = *(char **)v0;
    float f = *(float *)(v1 + 0x18) - 1.0f;

    *(float *)(v1 + 0x18) = f;
    if (f <= 0.0f)
        func_19D370(a0, x);
}
