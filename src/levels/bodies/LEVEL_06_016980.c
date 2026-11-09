/* LEVEL_06:0x016980 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_026840(void);
extern int D_00209670;
extern int D_001FACC0[];

int func_016980(void)
{
    char *base;
    int value;

    base = (char *)D_001FACC0;
    value = func_026840();
    return *(int *)(base + ((value << 2) + (D_00209670 << 3)));
}
