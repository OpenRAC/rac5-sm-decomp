/* LEVEL_07:0x0D3860 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_002188DC;
extern int D_002188F0;
extern int func_0B8080(int index);
extern void func_01AEE8(int a, int b);

void func_0D3860(void)
{
    D_002188F0 = 0;
    D_002188DC = 0;
    func_0B8080(0);
    func_01AEE8(4, 0);
}
