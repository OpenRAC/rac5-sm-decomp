/* LEVEL_22:0x124BF8 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_001EDBA4;
extern float D_001665D4;
extern int func_0E4378(unsigned int a0);

void func_124BF8(void)
{
    D_001665D4 = (float)func_0E4378((D_001EDBA4 << 16) | 0x580074C1u);
}
