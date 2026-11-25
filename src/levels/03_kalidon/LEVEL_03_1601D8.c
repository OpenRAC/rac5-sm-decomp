/* LEVEL_03:0x1601D8 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_002B2E64;
extern float D_0021FCCC;
extern int func_0FF620(unsigned int a0);

void func_1601D8(void)
{
    D_0021FCCC = (float)func_0FF620((D_002B2E64 << 16) | 0x580074C1u);
}
