/* LEVEL_01:0x165D08 -- builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_00297FE4;
extern float D_0020763C;
extern int func_100D88(unsigned int a0);

void func_165D08(void)
{
    D_0020763C = (float)func_100D88((D_00297FE4 << 16) | 0x580074C1u);
}
