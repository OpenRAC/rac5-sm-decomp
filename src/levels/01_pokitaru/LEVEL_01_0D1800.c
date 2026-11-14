/* LEVEL_01:0x0D1800 -- clears two globals, then runs two helpers with fixed arguments. */
extern int D_002045DC;
extern int D_002045F0;
extern int func_0B6020(int index);
extern void func_01A828(int a, int b);

void func_0D1800(void)
{
    D_002045F0 = 0;
    D_002045DC = 0;
    func_0B6020(0);
    func_01A828(4, 0);
}
