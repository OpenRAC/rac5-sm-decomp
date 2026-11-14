/* LEVEL_04:0x0D7098 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_0021DA9C;
extern int D_0021DAB0;
extern int func_0BB828(int index);
extern void func_01A4A8(int a, int b);

void func_0D7098(void)
{
    D_0021DAB0 = 0;
    D_0021DA9C = 0;
    func_0BB828(0);
    func_01A4A8(4, 0);
}
