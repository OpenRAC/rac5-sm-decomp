/* LEVEL_19:0x058158 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0CBF98(int a, int b, int c, int d);
extern int D_001A3604;
extern int D_001A3600;

void func_058158(void)
{
    D_001A3604 = func_0CBF98(1, 10, 1, 0);
    D_001A3600 = func_0CBF98(0, 10, 1, 0);
}
