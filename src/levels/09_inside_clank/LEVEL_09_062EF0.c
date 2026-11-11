/* LEVEL_09:0x062EF0 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0DA330(int a, int b, int c, int d);
extern int D_001DE834;
extern int D_001DE830;

void func_062EF0(void)
{
    D_001DE834 = func_0DA330(1, 10, 1, 0);
    D_001DE830 = func_0DA330(0, 10, 1, 0);
}
