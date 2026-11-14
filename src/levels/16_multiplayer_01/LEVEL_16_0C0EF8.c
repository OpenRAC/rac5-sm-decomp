/* LEVEL_16:0x0C0EF8 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_001B248C;
extern int D_001B24A0;
extern int func_0A50B0(int index);
extern void func_018B98(int a, int b);

void func_0C0EF8(void)
{
    D_001B24A0 = 0;
    D_001B248C = 0;
    func_0A50B0(0);
    func_018B98(4, 0);
}
