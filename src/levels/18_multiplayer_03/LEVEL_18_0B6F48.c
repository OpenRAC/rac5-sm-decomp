/* LEVEL_18:0x0B6F48 -- placement copy of LEVEL_16_0B7F70.c: fetches three handles, passes them to a helper, then calls a second helper. */
int func_10DFE0(int id);
void func_0C5620(int a, int b, int c, int d);
void func_0C5658(int a);

void func_0B6F48(void)
{
    int h1;
    int h2;
    int h3;

    h1 = func_10DFE0(0xA4D);
    h2 = func_10DFE0(0x30B);
    h3 = func_10DFE0(0x218);
    func_0C5620(3, h1, h2, h3);
    func_0C5658(10);
}
