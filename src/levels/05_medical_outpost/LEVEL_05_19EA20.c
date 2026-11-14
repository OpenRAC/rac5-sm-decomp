/* LEVEL_05:0x19EA20 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_001F7C9C;
extern void func_0EB888(int index);
extern int func_1259E0(unsigned int value);

void func_19EA20(void)
{
    func_0EB888(0x1F);
    func_0EB888(0x23);
    D_001F7C9C = func_1259E0(0x39686F69u);
}
