/* LEVEL_05:0x0CFDA8 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_001F395C;
extern int D_001F3970;
extern int func_0B45C8(int index);
extern void func_019DC0(int a, int b);

void func_0CFDA8(void)
{
    D_001F3970 = 0;
    D_001F395C = 0;
    func_0B45C8(0);
    func_019DC0(4, 0);
}
