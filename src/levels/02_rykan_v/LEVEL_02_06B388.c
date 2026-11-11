/* LEVEL_02:0x06B388 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0E3A10(int a, int b, int c, int d);
extern int D_002099F4;
extern int D_002099F0;

void func_06B388(void)
{
    D_002099F4 = func_0E3A10(1, 10, 1, 0);
    D_002099F0 = func_0E3A10(0, 10, 1, 0);
}
