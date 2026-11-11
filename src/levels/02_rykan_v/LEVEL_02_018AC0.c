/* LEVEL_02:0x018AC0 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_028A78(void);
extern int D_0022F770;
extern int D_00220DC0[];

int func_018AC0(void)
{
    char *base;
    int value;

    base = (char *)D_00220DC0;
    value = func_028A78();
    return *(int *)(base + ((value << 2) + (D_0022F770 << 3)));
}
