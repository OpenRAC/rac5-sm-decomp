/* LEVEL_10:0x017798 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_027B98(void);
extern int D_00223780;
extern int D_00214DC0[];

int func_017798(void)
{
    char *base;
    int value;

    base = (char *)D_00214DC0;
    value = func_027B98();
    return *(int *)(base + ((value << 2) + (D_00223780 << 3)));
}
