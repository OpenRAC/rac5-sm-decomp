/* LEVEL_04:0x017DF0 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_027EF8(void);
extern int D_00234170;
extern int D_002257C0[];

int func_017DF0(void)
{
    char *base;
    int value;

    base = (char *)D_002257C0;
    value = func_027EF8();
    return *(int *)(base + ((value << 2) + (D_00234170 << 3)));
}
