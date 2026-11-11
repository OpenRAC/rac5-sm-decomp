/* LEVEL_01:0x018130 -- indexes a global table with a helper result and a global scale. */
extern int func_028290(void);
extern int D_0021A7F0;
extern int D_0020BE40[];

int func_018130(void)
{
    char *base;
    int value;

    base = (char *)D_0020BE40;
    value = func_028290();
    return *(int *)(base + ((value << 2) + (D_0021A7F0 << 3)));
}
