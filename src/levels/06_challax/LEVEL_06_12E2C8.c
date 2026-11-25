/* LEVEL_06:0x12E2C8 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_00284B40[];
extern unsigned int D_00209C78[];
extern int D_001F5CD0[];
extern int D_001F5CDC;
extern int D_001F5CE0;
extern int func_1C1CF8(unsigned int value);
extern void func_1CAB18(unsigned int value);
extern int func_1206C0(unsigned int value);

void func_12E2C8(void)
{
    unsigned int i;
    int *p = &D_001F5CDC;

    *p = func_1C1CF8(((unsigned int)D_00284B40[82] << 16) | 0xE8005041u);
    D_001F5CE0 = ((int (*)(unsigned int value))func_1CAB18)(((unsigned int)D_00284B40[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_001F5CD0[i] = func_1206C0(D_00209C78[i]);
    }
}
