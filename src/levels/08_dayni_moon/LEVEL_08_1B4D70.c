/* LEVEL_08:0x1B4D70 -- stores the handle returned by the sound call for the packed id built from the global word. */
extern unsigned int D_002E70F8;
extern int D_00251D84;
extern int func_231638(unsigned int a0);

void func_1B4D70(void)
{
    D_00251D84 = func_231638((D_002E70F8 << 16) | 0x700010c1u);
}
