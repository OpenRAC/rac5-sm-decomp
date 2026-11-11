/* LEVEL_01:0x0662F0 -- creates two ordinary handles (slot 1 and slot 0, mode 10) and stores them in globals. */
extern int func_0DD080(int a, int b, int c, int d);
extern int D_001F4A34;
extern int D_001F4A30;

void func_0662F0(void)
{
    D_001F4A34 = func_0DD080(1, 10, 1, 0);
    D_001F4A30 = func_0DD080(0, 10, 1, 0);
}
