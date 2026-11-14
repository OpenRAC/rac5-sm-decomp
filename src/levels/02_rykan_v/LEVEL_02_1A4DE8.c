/* LEVEL_02:0x1A4DE8 -- stores the lookup results for two packed ids in globals. */
extern unsigned int D_002AF378;
extern int D_0021D61C;
extern int D_0021D620;
extern int func_108830(unsigned int value);
extern int func_130418(unsigned int value);

void func_1A4DE8(void)
{
    D_0021D61C = func_108830((D_002AF378 << 16) | 0xa00010c1u);
    D_0021D620 = func_130418(0x4c41081bu);
}
