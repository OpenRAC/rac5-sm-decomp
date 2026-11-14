/* LEVEL_03:0x154BA8 -- placement copy of LEVEL_01_155718.c: runs func_154070, then func_080A78 with 0 and the address of the handler at 0x1556F8. */
extern void func_154070(void);
extern void func_080A78(int first, int second);
extern void func_154B88(void);

void func_154BA8(void)
{
    func_154070();
    func_080A78(0, (int)func_154B88);
}
