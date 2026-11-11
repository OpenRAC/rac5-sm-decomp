/* LEVEL_03:0x064C78 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0DCE68(int a, int b, int c, int d);
extern int D_0020D0B4;
extern int D_0020D0B0;

void func_064C78(void)
{
    D_0020D0B4 = func_0DCE68(1, 10, 1, 0);
    D_0020D0B0 = func_0DCE68(0, 10, 1, 0);
}
