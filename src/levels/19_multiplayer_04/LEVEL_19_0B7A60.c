/* LEVEL_19:0x0B7A60 -- placement copy of LEVEL_16_0B8188.c: fetches three handles, then issues two configuration calls with them. */

int func_10F9D0(int key);
void func_0C5F20(int mode, int a, int b, int c);
void func_0C5F58(int v);

void func_0B7A60(void)
{
    int x;
    int y;
    int z;

    x = func_10F9D0(0xA4B);
    y = func_10F9D0(0x9FE);
    z = func_10F9D0(0x218);
    func_0C5F20(3, x, y, z);
    func_0C5F58(10);
}
