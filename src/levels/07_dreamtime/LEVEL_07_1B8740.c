/* LEVEL_07:0x1B8740 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_0021D8AC;
extern void func_0F0548(int index);
extern int func_12D068(unsigned int value);

void func_1B8740(void)
{
    func_0F0548(0x1F);
    func_0F0548(0x23);
    D_0021D8AC = func_12D068(0x39686F69u);
}
