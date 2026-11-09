/* LEVEL_22:0x11B040 -- appends an object to a table when a float limit holds. */
extern char D_002E7C08[];
extern char D_0011B770[];
extern void func_073620(void *a0, void *a1, int a2);

void func_11B040(char *a0)
{
    char *s0 = D_002E7C08;
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
        func_073620(a0, D_0011B770, 1);
    }
    *(int *)(s0 + 0xD4) = *(int *)(s0 + 0xD4) + 1;
}
