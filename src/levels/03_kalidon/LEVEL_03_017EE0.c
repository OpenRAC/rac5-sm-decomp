/* LEVEL_03:0x017EE0 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_028170(void);
extern int D_002336F0;
extern int D_00224D40[];

int func_017EE0(void)
{
    char *base;
    int value;

    base = (char *)D_00224D40;
    value = func_028170();
    return *(int *)(base + ((value << 2) + (D_002336F0 << 3)));
}
