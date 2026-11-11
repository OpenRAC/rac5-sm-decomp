/* LEVEL_22:0x014E18 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_022B28(void);
extern int D_00177C70;
extern int D_001692C0[];

int func_014E18(void)
{
    char *base;
    int value;

    base = (char *)D_001692C0;
    value = func_022B28();
    return *(int *)(base + ((value << 2) + (D_00177C70 << 3)));
}
