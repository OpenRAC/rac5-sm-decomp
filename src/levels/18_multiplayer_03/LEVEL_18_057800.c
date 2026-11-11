/* LEVEL_18:0x057800 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0CB698(int a, int b, int c, int d);
extern int D_001A3904;
extern int D_001A3900;

void func_057800(void)
{
    D_001A3904 = func_0CB698(1, 10, 1, 0);
    D_001A3900 = func_0CB698(0, 10, 1, 0);
}
