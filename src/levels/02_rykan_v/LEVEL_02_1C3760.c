/* LEVEL_02:0x1C3760 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_0021DC64;
extern void func_0F58F8(int index);
extern int func_130418(unsigned int value);

void func_1C3760(void)
{
    func_0F58F8(0x1F);
    func_0F58F8(0x23);
    D_0021DC64 = func_130418(0x39686F69u);
}
