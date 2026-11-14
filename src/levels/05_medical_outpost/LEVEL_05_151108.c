/* LEVEL_05:0x151108 -- placement copy of LEVEL_01_155718.c: runs func_1505D0, then func_07E338 with 0 and the address of the handler at 0x1556F8. */
extern void func_1505D0(void);
extern void func_07E338(int first, int second);
extern void func_1510E8(void);

void func_151108(void)
{
    func_1505D0();
    func_07E338(0, (int)func_1510E8);
}
