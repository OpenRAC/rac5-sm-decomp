/* LEVEL_09:0x1582E0 -- placement copy of LEVEL_01_165D08.c: builds a flag word from a global, runs the table routine and stores the integer it leaves in $v0 as a float. */
extern unsigned int D_0027F764;
extern float D_001F10FC;
extern int func_0FCC68(unsigned int a0);

void func_1582E0(void)
{
    D_001F10FC = (float)func_0FCC68((D_0027F764 << 16) | 0x580074C1u);
}
