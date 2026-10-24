extern int func_0148A8(void *a0, void *a1, int a2, int a3, int a4);

void func_014850(char *a0, char *a1, int a2)
{
    float b[4];

    if (func_0148A8(a0, b, a2, 0x38, 0)) {
        *(float *)(a0 + 4) = b[0];
    }
    if (a1 != 0) {
        *(float *)a1 = b[0];
    }
}
