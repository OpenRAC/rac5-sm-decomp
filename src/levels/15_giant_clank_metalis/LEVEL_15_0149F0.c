/* LEVEL_15:0x0149F0 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern long long func_022148(void);
extern int D_0016EF70;
extern int D_001605C0[];

int func_0149F0(void)
{
    char *base;
    int value;

    base = (char *)D_001605C0;
    value = ((int (*)(void))func_022148)();
    return *(int *)(base + ((value << 2) + (D_0016EF70 << 3)));
}
