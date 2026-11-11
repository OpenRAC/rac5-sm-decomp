/* LEVEL_23:0x144398 -- placement copy of LEVEL_22_11B040.c: appends an object to a table when a float limit holds. */
extern char D_00363960[];
extern char D_00144AC8[];
extern void func_077FF8(void *a0, void *a1, int a2);

void func_144398(char *a0)
{
    char *s0 = D_00363960;
    int v = *(int *)(s0 + 0xD4);
    char *o = *(char **)(a0 + 0x58);
    float f1;

    if (v >= 0x20) {
        return;
    }
    f1 = *(float *)(o + 0x60);
    if (256.0f < f1) {
        return;
    }
    ((char **)s0)[v] = a0;
    if (*(int *)(s0 + 0xD4) <= 0) {
        func_077FF8(a0, D_00144AC8, 1);
    }
    *(int *)(s0 + 0xD4) = *(int *)(s0 + 0xD4) + 1;
}
