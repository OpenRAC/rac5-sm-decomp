/* LEVEL_24:0x05F940 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0D6778(int a, int b, int c, int d);
extern int D_001C56B4;
extern int D_001C56B0;

void func_05F940(void)
{
    D_001C56B4 = func_0D6778(1, 10, 1, 0);
    D_001C56B0 = func_0D6778(0, 10, 1, 0);
}
