/* LEVEL_18:0x0B7100 -- placement copy of LEVEL_16_0B8128.c: fetches three handles from one helper, then passes them with a constant to two helpers. */
extern int func_10DFE0(int id);
extern void func_0C5620(int a0, int a1, int a2, int a3);
extern void func_0C5658(int a0);

void func_0B7100(void)
{
    int r1;
    int r2;
    int r3;

    r1 = func_10DFE0(0x6E7);
    r2 = func_10DFE0(0x9FE);
    r3 = func_10DFE0(0x218);
    func_0C5620(3, r1, r2, r3);
    func_0C5658(10);
}
