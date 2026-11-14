/* LEVEL_24:0x1825C0 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_001D9AC4;
extern void func_0E7358(int index);
extern int func_11FB68(unsigned int value);

void func_1825C0(void)
{
    func_0E7358(0x1F);
    func_0E7358(0x23);
    D_001D9AC4 = func_11FB68(0x39686F69u);
}
