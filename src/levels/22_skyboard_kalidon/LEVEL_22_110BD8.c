/* LEVEL_22:0x110BD8 -- appends an object to a table when a float limit holds. */
extern char D_002E7278[];
extern char D_001110C0[];
extern void func_073620(void *a0, void *a1, int a2);

void func_110BD8(char *a0)
{
    char *s0 = D_002E7278;
    int v = *(int *)(s0 + 0x154);
    char *o;
    float f1;

    o = *(char **)(a0 + 0x58);
    if (v < 0x40) {
        f1 = *(float *)(o + 0x1E8);
        if (!(100.0f < f1)) {
            ((char **)s0)[v] = a0;
            if (*(int *)(s0 + 0x154) <= 0) {
                func_073620(a0, D_001110C0, 1);
            }
            *(int *)(s0 + 0x154) = *(int *)(s0 + 0x154) + 1;
        }
    }
}
