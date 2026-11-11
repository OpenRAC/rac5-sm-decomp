/* LEVEL_07:0x018840 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_0285F0(void);
extern int D_0022F4F0;
extern int D_00220B40[];

int func_018840(void)
{
    char *base;
    int value;

    base = (char *)D_00220B40;
    value = func_0285F0();
    return *(int *)(base + ((value << 2) + (D_0022F4F0 << 3)));
}
