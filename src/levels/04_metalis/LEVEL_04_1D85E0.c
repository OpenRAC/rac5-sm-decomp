/* LEVEL_04:0x1D85E0 -- runs a setup helper, then stores the id looked up for a fixed hash into a global. */
extern int D_00222724;
extern void func_0F6C80(int index);
extern int func_1364E8(unsigned int value);

void func_1D85E0(void)
{
    func_0F6C80(4);
    D_00222724 = func_1364E8(0xE42B3EACu);
}
