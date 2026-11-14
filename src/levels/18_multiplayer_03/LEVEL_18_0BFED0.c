/* LEVEL_18:0x0BFED0 -- placement copy of LEVEL_01_0D1800.c: clears two globals, then runs two helpers with fixed arguments. */
extern int D_001B390C;
extern int D_001B3920;
extern int func_0A40A8(int index);
extern void func_0181E0(int a, int b);

void func_0BFED0(void)
{
    D_001B3920 = 0;
    D_001B390C = 0;
    func_0A40A8(0);
    func_0181E0(4, 0);
}
