/* LEVEL_23:0x05FAA8 -- placement copy of LEVEL_01_0662F0.c: creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0D3C40(int a, int b, int c, int d);
extern int D_001C7E34;
extern int D_001C7E30;

void func_05FAA8(void)
{
    D_001C7E34 = func_0D3C40(1, 10, 1, 0);
    D_001C7E30 = func_0D3C40(0, 10, 1, 0);
}
