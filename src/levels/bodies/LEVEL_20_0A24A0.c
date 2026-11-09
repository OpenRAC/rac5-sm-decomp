/* LEVEL_20:0x0A24A0 -- placement copy of LEVEL_16_0B7F70.c: fetches three handles, passes them to a helper, then calls a second helper. */
int func_0E2118(int id);
void func_0B0B78(int a, int b, int c, int d);
void func_0B0BB0(int a);

void func_0A24A0(void)
{
    int h1;
    int h2;
    int h3;

    h1 = func_0E2118(0xA4D);
    h2 = func_0E2118(0x30B);
    h3 = func_0E2118(0x218);
    func_0B0B78(3, h1, h2, h3);
    func_0B0BB0(10);
}
