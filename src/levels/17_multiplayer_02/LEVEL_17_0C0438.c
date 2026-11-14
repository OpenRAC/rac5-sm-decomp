/* LEVEL_17:0x0C0438 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_001A5A8C;
extern int D_001A5AA0;
extern int func_0A4590(int index);
extern void func_018518(int a, int b);

void func_0C0438(void)
{
    D_001A5AA0 = 0;
    D_001A5A8C = 0;
    func_0A4590(0);
    func_018518(4, 0);
}
