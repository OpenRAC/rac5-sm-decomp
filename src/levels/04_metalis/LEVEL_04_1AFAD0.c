/* LEVEL_04:0x1AFAD0 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_00222304;
extern void func_0F6C80(int index);
extern int func_1364E8(unsigned int value);

void func_1AFAD0(void)
{
    func_0F6C80(0x1F);
    func_0F6C80(0x23);
    D_00222304 = func_1364E8(0x39686F69u);
}
