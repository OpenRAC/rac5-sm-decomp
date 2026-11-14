/* LEVEL_08:0x167BC0 -- placement copy of LEVEL_01_155718.c: runs func_167060, then func_088C08 with 0 and the address of the handler at 0x1556F8. */
extern void func_167060(void);
extern void func_088C08(int first, int second);
extern void func_167BA0(void);

void func_167BC0(void)
{
    func_167060();
    func_088C08(0, (int)func_167BA0);
}
