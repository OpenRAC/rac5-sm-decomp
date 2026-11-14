/* LEVEL_04:0x1A3FA8 -- stores the lookup results for two packed ids in globals. */
extern unsigned int D_002B268C;
extern int D_00221FFC;
extern int D_00222000;
extern int func_109210(unsigned int value);
extern int func_1364E8(unsigned int value);

void func_1A3FA8(void)
{
    D_00221FFC = func_109210((D_002B268C << 16) | 0xC0001041u);
    D_00222000 = func_1364E8(0x84FC981Cu);
}
