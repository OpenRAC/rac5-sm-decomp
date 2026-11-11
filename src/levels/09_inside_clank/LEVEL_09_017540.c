/* LEVEL_09:0x017540 -- placement copy of LEVEL_01_018130.c: indexes a global table with a helper result and a global scale. */
extern int func_027298(void);
extern int D_002043F0;
extern int D_001F5A40[];

int func_017540(void)
{
    char *base;
    int value;

    base = (char *)D_001F5A40;
    value = func_027298();
    return *(int *)(base + ((value << 2) + (D_002043F0 << 3)));
}
