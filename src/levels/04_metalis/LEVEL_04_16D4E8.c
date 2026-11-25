/* LEVEL_04:0x16D4E8 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_002B27E4;
extern float D_00220D74;
extern int func_10B078(unsigned int a0);

void func_16D4E8(void)
{
    D_00220D74 = (float)func_10B078((D_002B27E4 << 16) | 0x580074C1u);
}
