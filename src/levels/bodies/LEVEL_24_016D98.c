/* LEVEL_24:0x016D98 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_025AC8(void);
extern int D_001EB570;
extern int D_001DCBC0[];

int func_016D98(void)
{
    char *base;
    int value;

    base = (char *)D_001DCBC0;
    value = func_025AC8();
    return *(int *)(base + ((value << 2) + (D_001EB570 << 3)));
}
