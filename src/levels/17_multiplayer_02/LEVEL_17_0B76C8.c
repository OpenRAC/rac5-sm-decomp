/* LEVEL_17:0x0B76C8 -- placement copy of LEVEL_16_0B8188.c: fetches three handles, then issues two configuration calls with them. */

int func_10E8A8(int key);
void func_0C5B88(int mode, int a, int b, int c);
void func_0C5BC0(int v);

void func_0B76C8(void)
{
    int x;
    int y;
    int z;

    x = func_10E8A8(0xA4B);
    y = func_10E8A8(0x9FE);
    z = func_10E8A8(0x218);
    func_0C5B88(3, x, y, z);
    func_0C5BC0(10);
}
