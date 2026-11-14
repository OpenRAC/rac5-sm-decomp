/* LEVEL_22:0x0BFD40 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_0016395C;
extern int D_00163970;
extern int func_0A4570(int index);
extern void func_016E40(int a, int b);

void func_0BFD40(void)
{
    D_00163970 = 0;
    D_0016395C = 0;
    func_0A4570(0);
    func_016E40(4, 0);
}
