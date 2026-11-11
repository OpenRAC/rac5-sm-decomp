/* LEVEL_05:0x0177C8 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_0270A8(void);
extern int D_002096F0;
extern int D_001FAD40[];

int func_0177C8(void)
{
    char *base;
    int value;

    base = (char *)D_001FAD40;
    value = func_0270A8();
    return *(int *)(base + ((value << 2) + (D_002096F0 << 3)));
}
