/* LEVEL_09:0x14E6F8 -- placement copy of LEVEL_01_155718.c: runs func_14DBC0, then func_07D718 with 0 and the address of the handler at 0x1556F8. */
extern void func_14DBC0(void);
extern void func_07D718(int first, int second);
extern void func_14E6D8(void);

void func_14E6F8(void)
{
    func_14DBC0();
    func_07D718(0, (int)func_14E6D8);
}
