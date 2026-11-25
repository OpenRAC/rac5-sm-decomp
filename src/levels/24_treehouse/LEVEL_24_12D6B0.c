/* LEVEL_24:0x12D6B0 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_00263C80[];
extern unsigned int D_001EBB10[];
extern int D_001D7D50[];
extern int D_001D7D5C;
extern int D_001D7D60;
extern int func_1A6218(unsigned int value);
extern void func_1AEB20(unsigned int value);
extern int func_11FB68(unsigned int value);

void func_12D6B0(void)
{
    unsigned int i;
    int *p = &D_001D7D5C;

    *p = func_1A6218(((unsigned int)D_00263C80[82] << 16) | 0xE8005041u);
    D_001D7D60 = ((int (*)(unsigned int value))func_1AEB20)(((unsigned int)D_00263C80[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_001D7D50[i] = func_11FB68(D_001EBB10[i]);
    }
}
