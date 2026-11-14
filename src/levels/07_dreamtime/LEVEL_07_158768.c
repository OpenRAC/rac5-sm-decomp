/* LEVEL_07:0x158768 -- placement copy of LEVEL_01_155428.c: clears a global and then calls the helper with zero. */
extern int D_0021B70C;
extern void func_07E7E0(int value);

void func_158768(void)
{
    D_0021B70C = 0;
    func_07E7E0(0);
}
