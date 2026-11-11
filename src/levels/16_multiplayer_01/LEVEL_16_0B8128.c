/* LEVEL_16:0x0B8128 -- fetches three handles from one helper, then passes them with a constant to two helpers. */
extern int func_10F330(int id);
extern void func_0C6648(int a0, int a1, int a2, int a3);
extern void func_0C6680(int a0);

void func_0B8128(void)
{
    int r1;
    int r2;
    int r3;

    r1 = func_10F330(0x6E7);
    r2 = func_10F330(0x9FE);
    r3 = func_10F330(0x218);
    func_0C6648(3, r1, r2, r3);
    func_0C6680(10);
}
