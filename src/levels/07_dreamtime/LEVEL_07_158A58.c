/* LEVEL_07:0x158A58 -- placement copy of LEVEL_01_155718.c: runs func_157F08, then func_082E00 with 0 and the address of the handler at 0x1556F8. */
extern void func_157F08(void);
extern void func_082E00(int first, int second);
extern void func_158A38(void);

void func_158A58(void)
{
    func_157F08();
    func_082E00(0, (int)func_158A38);
}
