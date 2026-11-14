/* LEVEL_03:0x135FE0 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_002B2C40[];
extern unsigned int D_00233DF0[];
extern int D_0021F750[];
extern int D_0021F75C;
extern int D_0021F760;
extern int func_1E64B0(unsigned int value);
extern int func_1F20A0(unsigned int value);
extern int func_1282D0(unsigned int value);

void func_135FE0(void)
{
    unsigned int i;
    int *p = &D_0021F75C;

    *p = func_1E64B0(((unsigned int)D_002B2C40[82] << 16) | 0xE8005041u);
    D_0021F760 = func_1F20A0(((unsigned int)D_002B2C40[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_0021F750[i] = func_1282D0(D_00233DF0[i]);
    }
}
