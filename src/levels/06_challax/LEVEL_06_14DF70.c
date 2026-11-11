/* LEVEL_06:0x14DF70 -- selects state 0x16 and stores the lookup result for a fixed id in a global. */
extern int D_00380668;
extern void func_0E8808(int);
extern int func_1206C0(unsigned int);

void func_14DF70(void)
{
    func_0E8808(0x16);
    D_00380668 = func_1206C0(0xFC17ADFFu);
}
