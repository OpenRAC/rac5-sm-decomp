/* LEVEL_10:0x0D2C40 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_0020D5DC;
extern int D_0020D5F0;
extern int func_0B71F8(int index);
extern void func_019EA8(int a, int b);

void func_0D2C40(void)
{
    D_0020D5F0 = 0;
    D_0020D5DC = 0;
    func_0B71F8(0);
    func_019EA8(4, 0);
}
