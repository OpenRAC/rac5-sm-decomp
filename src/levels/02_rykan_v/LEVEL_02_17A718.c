/* LEVEL_02:0x17A718 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_002AF4E4;
extern float D_0021C784;
extern int func_106F38(unsigned int a0);

void func_17A718(void)
{
    D_0021C784 = (float)func_106F38((D_002AF4E4 << 16) | 0x580074C1u);
}
