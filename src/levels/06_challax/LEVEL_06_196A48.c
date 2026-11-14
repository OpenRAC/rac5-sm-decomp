/* LEVEL_06:0x196A48 -- placement copy of LEVEL_01_1A3F20.c: runs two setup helpers, then stores the id looked up for a fixed hash into a global. */
extern int D_001F7B64;
extern void func_0E8808(int index);
extern int func_1206C0(unsigned int value);

void func_196A48(void)
{
    func_0E8808(0x1F);
    func_0E8808(0x23);
    D_001F7B64 = func_1206C0(0x39686F69u);
}
