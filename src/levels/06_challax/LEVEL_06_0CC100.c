/* LEVEL_06:0x0CC100 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_001F34DC;
extern int D_001F34F0;
extern int func_0B0848(int index);
extern void func_019028(int a, int b);

void func_0CC100(void)
{
    D_001F34F0 = 0;
    D_001F34DC = 0;
    func_0B0848(0);
    func_019028(4, 0);
}
