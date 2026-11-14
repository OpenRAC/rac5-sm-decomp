/* LEVEL_19:0x0C07D0 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_001B360C;
extern int D_001B3620;
extern int func_0A4928(int index);
extern void func_018898(int a, int b);

void func_0C07D0(void)
{
    D_001B3620 = 0;
    D_001B360C = 0;
    func_0A4928(0);
    func_018898(4, 0);
}
