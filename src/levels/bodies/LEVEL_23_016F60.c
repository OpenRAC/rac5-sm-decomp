/* LEVEL_23:0x016F60 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_025FC0(void);
extern int D_001ED970;
extern int D_001DEFC0[];

int func_016F60(void)
{
    char *base;
    int value;

    base = (char *)D_001DEFC0;
    value = func_025FC0();
    return *(int *)(base + ((value << 2) + (D_001ED970 << 3)));
}
