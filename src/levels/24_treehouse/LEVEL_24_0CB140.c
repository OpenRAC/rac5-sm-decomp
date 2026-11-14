/* LEVEL_24:0x0CB140 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_001D525C;
extern int D_001D5270;
extern int func_0AF8B0(int index);
extern void func_018E18(int a, int b);

void func_0CB140(void)
{
    D_001D5270 = 0;
    D_001D525C = 0;
    func_0AF8B0(0);
    func_018E18(4, 0);
}
