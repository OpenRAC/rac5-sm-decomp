/* LEVEL_06:0x0630B0 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0D7980(int a, int b, int c, int d);
extern int D_001E3934;
extern int D_001E3930;

void func_0630B0(void)
{
    D_001E3934 = func_0D7980(1, 10, 1, 0);
    D_001E3930 = func_0D7980(0, 10, 1, 0);
}
