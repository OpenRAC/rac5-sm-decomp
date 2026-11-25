/* LEVEL_19:0x127FF8 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_0024E3C0[];
extern unsigned int D_001D1B20[];
extern int D_001BE668[];
extern int D_001BE674;
extern int D_001BE678;
extern int func_186920(unsigned int value);
extern void func_18EB10(unsigned int value);
extern int func_107538(unsigned int value);

void func_127FF8(void)
{
    unsigned int i;
    int *p = &D_001BE674;

    *p = func_186920(((unsigned int)D_0024E3C0[82] << 16) | 0xE8005041u);
    D_001BE678 = ((int (*)(unsigned int value))func_18EB10)(((unsigned int)D_0024E3C0[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_001BE668[i] = func_107538(D_001D1B20[i]);
    }
}
