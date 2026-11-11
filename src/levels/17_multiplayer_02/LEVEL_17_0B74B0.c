/* LEVEL_17:0x0B74B0 -- placement copy of LEVEL_16_0B7F70.c: fetches three handles, passes them to a helper, then calls a second helper. */
int func_10E8A8(int id);
void func_0C5B88(int a, int b, int c, int d);
void func_0C5BC0(int a);

void func_0B74B0(void)
{
    int h1;
    int h2;
    int h3;

    h1 = func_10E8A8(0xA4D);
    h2 = func_10E8A8(0x30B);
    h3 = func_10E8A8(0x218);
    func_0C5B88(3, h1, h2, h3);
    func_0C5BC0(10);
}
