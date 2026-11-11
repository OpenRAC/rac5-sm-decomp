/* LEVEL_08:0x1873B8 -- placement copy of LEVEL_04_17BCC8.c: calls a helper with four float arguments, then updates a pair of state words. */

extern char *func_1FA3F0(int a0, char *a1, char *a2, int a3, int a4, float f12, float f13, float f14, float f15);

int func_1873B8(char *a0)
{
    char *s1;
    int *v0;
    int v1;
    int r;

    s1 = *(char **)(a0 + 0x58);
    v0 = (int *)func_1FA3F0(*(int *)*(char **)(a0 + 0x54), a0, a0 + 0x30, 0, 0, 0.0f, 1.0000000150474662e+30f, -1.0f, 1.000100016593933f);
    if (v0 != 0) {
        v1 = *v0;
    } else {
        v1 = 0;
    }
    *(int *)(s1 + 0x108) = v1;
    if (v1 == 0) {
        r = *(int *)(s1 + 0x10C);
        if (r != 0) {
            *(int *)(s1 + 0x108) = r;
            *(int *)(s1 + 0x10C) = 0;
        } else {
            a0[0x45] = 2;
            return 0;
        }
    }
    return 1;
}
