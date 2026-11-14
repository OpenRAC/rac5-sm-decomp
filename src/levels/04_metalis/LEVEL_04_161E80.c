/* LEVEL_04:0x161E80 -- placement copy of LEVEL_01_155718.c: runs func_161330, then func_0840A8 with 0 and the address of the handler at 0x1556F8. */
extern void func_161330(void);
extern void func_0840A8(int first, int second);
extern void func_161E60(void);

void func_161E80(void)
{
    func_161330();
    func_0840A8(0, (int)func_161E60);
}
