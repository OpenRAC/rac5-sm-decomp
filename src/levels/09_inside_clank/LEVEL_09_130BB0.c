/* LEVEL_09:0x130BB0 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_0027F540[];
extern unsigned int D_00204A10[];
extern int D_001F0BD0[];
extern int D_001F0BDC;
extern int D_001F0BE0;
extern int func_1BCC18(unsigned int value);
extern int func_1C5A38(unsigned int value);
extern int func_123000(unsigned int value);

void func_130BB0(void)
{
    unsigned int i;
    int *p = &D_001F0BDC;

    *p = func_1BCC18(((unsigned int)D_0027F540[82] << 16) | 0xE8005041u);
    D_001F0BE0 = func_1C5A38(((unsigned int)D_0027F540[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_001F0BD0[i] = func_123000(D_00204A10[i]);
    }
}
