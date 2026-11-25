/* LEVEL_07:0x1638B8 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_002AD8E4;
extern float D_0021B924;
extern int func_101B88(unsigned int a0);

void func_1638B8(void)
{
    D_0021B924 = (float)func_101B88((D_002AD8E4 << 16) | 0x580074C1u);
}
