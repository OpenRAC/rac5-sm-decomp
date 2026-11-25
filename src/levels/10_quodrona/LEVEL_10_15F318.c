/* LEVEL_10:0x15F318 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_002A13E4;
extern float D_00210284;
extern int func_1006C8(unsigned int a0);

void func_15F318(void)
{
    D_00210284 = (float)func_1006C8((D_002A13E4 << 16) | 0x580074C1u);
}
