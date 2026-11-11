/* LEVEL_08:0x06BB38 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0E8050(int a, int b, int c, int d);
extern int D_0023D8F4;
extern int D_0023D8F0;

void func_06BB38(void)
{
    D_0023D8F4 = func_0E8050(1, 10, 1, 0);
    D_0023D8F0 = func_0E8050(0, 10, 1, 0);
}
