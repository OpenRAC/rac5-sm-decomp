/* LEVEL_08:0x018A20 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_0288B8(void);
extern int D_00264470;
extern int D_00255AC0[];

int func_018A20(void)
{
    char *base;
    int value;

    base = (char *)D_00255AC0;
    value = func_0288B8();
    return *(int *)(base + ((value << 2) + (D_00264470 << 3)));
}
