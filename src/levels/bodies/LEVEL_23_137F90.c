/* LEVEL_23:0x137F90 -- placement copy of LEVEL_22_110BD8.c: appends an object to a table when a float limit holds. */
extern char D_00362E90[];
extern char D_00138478[];
extern void func_077FF8(void *a0, void *a1, int a2);

void func_137F90(char *a0)
{
    char *s0 = D_00362E90;
    int v = *(int *)(s0 + 0x154);
    char *o;
    float f1;

    o = *(char **)(a0 + 0x58);
    if (v < 0x40) {
        f1 = *(float *)(o + 0x1E8);
        if (!(100.0f < f1)) {
            ((char **)s0)[v] = a0;
            if (*(int *)(s0 + 0x154) <= 0) {
                func_077FF8(a0, D_00138478, 1);
            }
            *(int *)(s0 + 0x154) = *(int *)(s0 + 0x154) + 1;
        }
    }
}
