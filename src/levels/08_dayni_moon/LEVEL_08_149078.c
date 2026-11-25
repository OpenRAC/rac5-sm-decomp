/* LEVEL_08:0x149078 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_002E7040[];
extern unsigned int D_00264CF8[];
extern int D_0024FF90[];
extern int D_0024FF9C;
extern int D_0024FFA0;
extern int func_215808(unsigned int value);
extern void func_220A78(unsigned int value);
extern int func_13B5A0(unsigned int value);

void func_149078(void)
{
    unsigned int i;
    int *p = &D_0024FF9C;

    *p = func_215808(((unsigned int)D_002E7040[82] << 16) | 0xE8005041u);
    D_0024FFA0 = ((int (*)(unsigned int value))func_220A78)(((unsigned int)D_002E7040[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_0024FF90[i] = func_13B5A0(D_00264CF8[i]);
    }
}
