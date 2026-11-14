/* LEVEL_23:0x185218 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_001DC024;
extern void func_0E2630(int index);
extern int func_11AEE0(unsigned int value);

void func_185218(void)
{
    func_0E2630(0x1F);
    func_0E2630(0x23);
    D_001DC024 = func_11AEE0(0x39686F69u);
}
