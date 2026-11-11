/* LEVEL_16:0x058CF8 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0CC6C0(int a, int b, int c, int d);
extern int D_001A2484;
extern int D_001A2480;

void func_058CF8(void)
{
    D_001A2484 = func_0CC6C0(1, 10, 1, 0);
    D_001A2480 = func_0CC6C0(0, 10, 1, 0);
}
