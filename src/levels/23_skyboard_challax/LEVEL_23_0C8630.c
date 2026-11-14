/* LEVEL_23:0x0C8630 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_001D79DC;
extern int D_001D79F0;
extern int func_0ACDE8(int index);
extern void func_019338(int a, int b);

void func_0C8630(void)
{
    D_001D79F0 = 0;
    D_001D79DC = 0;
    func_0ACDE8(0);
    func_019338(4, 0);
}
