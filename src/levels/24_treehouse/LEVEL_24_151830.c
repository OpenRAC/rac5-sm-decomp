/* LEVEL_24:0x151830 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_00263EA4;
extern float D_001D856C;
extern int func_0F8998(unsigned int a0);

void func_151830(void)
{
    D_001D856C = (float)func_0F8998((D_00263EA4 << 16) | 0x580074C1u);
}
