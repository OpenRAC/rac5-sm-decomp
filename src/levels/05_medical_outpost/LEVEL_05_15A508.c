/* LEVEL_05:0x15A508 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_00283EA4;
extern float D_001F6674;
extern int func_0FE468(unsigned int a0);

void func_15A508(void)
{
    D_001F6674 = (float)func_0FE468((D_00283EA4 << 16) | 0x580074C1u);
}
