/* LEVEL_05:0x1335E8 -- placement copy of LEVEL_01_137C80.c: builds two packed handles from the table, then resolves three table entries into their globals. */
extern int D_00283C80[];
extern unsigned int D_00209CD8[];
extern int D_001F6150[];
extern int D_001F615C;
extern int D_001F6160;
extern int func_1C38A8(unsigned int value);
extern int func_1CC6C8(unsigned int value);
extern int func_1259E0(unsigned int value);

void func_1335E8(void)
{
    unsigned int i;
    int *p = &D_001F615C;

    *p = func_1C38A8(((unsigned int)D_00283C80[82] << 16) | 0xE8005041u);
    D_001F6160 = func_1CC6C8(((unsigned int)D_00283C80[20] << 16) | 0xE00050D9u);
    for (i = 0; i < 3; i++) {
        D_001F6150[i] = func_1259E0(D_00209CD8[i]);
    }
}
