/* LEVEL_10:0x154260 -- placement copy of LEVEL_01_155718.c: runs func_1536E8, then func_0812C8 with 0 and the address of the handler at 0x1556F8. */
extern void func_1536E8(void);
extern void func_0812C8(int first, int second);
extern void func_154240(void);

void func_154260(void)
{
    func_1536E8();
    func_0812C8(0, (int)func_154240);
}
