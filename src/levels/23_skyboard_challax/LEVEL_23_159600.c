/* LEVEL_23:0x159600 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_00269424;
extern float D_001DAD84;
extern int func_0F3C70(unsigned int a0);

void func_159600(void)
{
    D_001DAD84 = (float)func_0F3C70((D_00269424 << 16) | 0x580074C1u);
}
