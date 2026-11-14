/* LEVEL_08:0x0DC7A8 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_0024D49C;
extern int D_0024D4B0;
extern int func_0C0F10(int index);
extern void func_01B1A0(int a, int b);

void func_0DC7A8(void)
{
    D_0024D4B0 = 0;
    D_0024D49C = 0;
    func_0C0F10(0);
    func_01B1A0(4, 0);
}
