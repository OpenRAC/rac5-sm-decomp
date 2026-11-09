/* LEVEL_16:0x0B7F70 -- fetches three handles, passes them to a helper, then calls a second helper. */
int func_10F330(int id);
void func_0C6648(int a, int b, int c, int d);
void func_0C6680(int a);

void func_0B7F70(void)
{
    int h1;
    int h2;
    int h3;

    h1 = func_10F330(0xA4D);
    h2 = func_10F330(0x30B);
    h3 = func_10F330(0x218);
    func_0C6648(3, h1, h2, h3);
    func_0C6680(10);
}
