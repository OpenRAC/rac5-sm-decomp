/* LEVEL_21:0x0B1E40 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_0015925C;
extern int D_00159270;
extern int func_096530(int index);
extern void func_016A10(int a, int b);

void func_0B1E40(void)
{
    D_00159270 = 0;
    D_0015925C = 0;
    func_096530(0);
    func_016A10(4, 0);
}
