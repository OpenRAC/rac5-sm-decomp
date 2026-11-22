extern int func_0148A8(void *a0, void *a1, int a2, int a3, int a4);

int func_014850(char *a0, char *a1, int a2, float f)
{
    float b[4];
    int r;

    r = func_0148A8(a0, b, a2, 0x38, 0);
    if (r) {
        *(float *)(a0 + 4) = b[0];
    }
    if (a1 != 0) {
        *(float *)a1 = b[0];
    }
    return r;
}
