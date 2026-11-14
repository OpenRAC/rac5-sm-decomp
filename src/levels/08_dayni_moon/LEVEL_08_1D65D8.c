/* LEVEL_08:0x1D65D8 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_00252374;
extern void func_0FB190(int index);
extern int func_13B5A0(unsigned int value);

void func_1D65D8(void)
{
    func_0FB190(0x1F);
    func_0FB190(0x23);
    D_00252374 = func_13B5A0(0x39686F69u);
}
