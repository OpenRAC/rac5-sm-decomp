/* LEVEL_09:0x195F50 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_001F2904;
extern void func_0EB628(int index);
extern int func_123000(unsigned int value);

void func_195F50(void)
{
    func_0EB628(0x1F);
    func_0EB628(0x23);
    D_001F2904 = func_123000(0x39686F69u);
}
