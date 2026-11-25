/* LEVEL_08:0x177C40 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_002E7264;
extern float D_0025085C;
extern int func_10F588(unsigned int a0);

void func_177C40(void)
{
    D_0025085C = (float)func_10F588((D_002E7264 << 16) | 0x580074C1u);
}
