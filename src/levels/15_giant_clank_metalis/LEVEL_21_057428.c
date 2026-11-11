/* LEVEL_21:0x057428 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0BC940(int a, int b, int c, int d);
extern int D_001496B4;
extern int D_001496B0;

void func_057428(void)
{
    D_001496B4 = func_0BC940(1, 10, 1, 0);
    D_001496B0 = func_0BC940(0, 10, 1, 0);
}
