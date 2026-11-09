/* LEVEL_20:0x0A2658 -- placement copy of LEVEL_16_0B8128.c: fetches three handles from one helper, then passes them with a constant to two helpers. */
extern int func_0E2118(int id);
extern void func_0B0B78(int a0, int a1, int a2, int a3);
extern void func_0B0BB0(int a0);

void func_0A2658(void)
{
    int r1;
    int r2;
    int r3;

    r1 = func_0E2118(0x6E7);
    r2 = func_0E2118(0x9FE);
    r3 = func_0E2118(0x218);
    func_0B0B78(3, r1, r2, r3);
    func_0B0BB0(10);
}
