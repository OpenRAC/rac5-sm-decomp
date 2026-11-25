/* LEVEL_06:0x156418 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_00284D64;
extern float D_001F6204;
extern int func_0F9E48(unsigned int a0);

void func_156418(void)
{
    D_001F6204 = (float)func_0F9E48((D_00284D64 << 16) | 0x580074C1u);
}
