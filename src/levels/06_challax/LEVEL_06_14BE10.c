/* LEVEL_06:0x14BE10 -- placement copy of LEVEL_01_155718.c: runs func_14B2D8, then func_07A878 with 0 and the address of the handler at 0x1556F8. */
extern void func_14B2D8(void);
extern void func_07A878(int first, int second);
extern void func_14BDF0(void);

void func_14BE10(void)
{
    func_14B2D8();
    func_07A878(0, (int)func_14BDF0);
}
