/* LEVEL_20:0x0AB428 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_00114B6C;
extern int D_00114B80;
extern int func_08F6B0(int index);
extern void func_016950(int a, int b);

void func_0AB428(void)
{
    D_00114B80 = 0;
    D_00114B6C = 0;
    func_08F6B0(0);
    func_016950(4, 0);
}
