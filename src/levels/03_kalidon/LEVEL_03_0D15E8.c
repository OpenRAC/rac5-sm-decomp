/* LEVEL_03:0x0D15E8 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_0021CC5C;
extern int D_0021CC70;
extern int func_0B5E08(int index);
extern void func_01A590(int a, int b);

void func_0D15E8(void)
{
    D_0021CC70 = 0;
    D_0021CC5C = 0;
    func_0B5E08(0);
    func_01A590(4, 0);
}
