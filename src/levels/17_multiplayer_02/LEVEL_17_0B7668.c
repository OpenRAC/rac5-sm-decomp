/* LEVEL_17:0x0B7668 -- placement copy of LEVEL_16_0B8128.c: fetches three handles from one helper, then passes them with a constant to two helpers. */
extern int func_10E8A8(int id);
extern void func_0C5B88(int a0, int a1, int a2, int a3);
extern void func_0C5BC0(int a0);

void func_0B7668(void)
{
    int r1;
    int r2;
    int r3;

    r1 = func_10E8A8(0x6E7);
    r2 = func_10E8A8(0x9FE);
    r3 = func_10E8A8(0x218);
    func_0C5B88(3, r1, r2, r3);
    func_0C5BC0(10);
}
