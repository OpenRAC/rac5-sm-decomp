/* LEVEL_01:0x155428 -- clears a global and then calls the helper with zero. */
extern int D_00207404;
extern void func_07C660(int value);

void func_155428(void)
{
    D_00207404 = 0;
    func_07C660(0);
}
