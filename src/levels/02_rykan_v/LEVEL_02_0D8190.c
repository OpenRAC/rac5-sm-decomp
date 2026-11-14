/* LEVEL_02:0x0D8190 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_0021959C;
extern int D_002195B0;
extern int func_0BC930(int index);
extern void func_01B188(int a, int b);

void func_0D8190(void)
{
    D_002195B0 = 0;
    D_0021959C = 0;
    func_0BC930(0);
    func_01B188(4, 0);
}
