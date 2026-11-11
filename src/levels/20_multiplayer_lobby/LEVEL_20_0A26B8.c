/* LEVEL_20:0x0A26B8 -- placement copy of LEVEL_16_0B8188.c: fetches three handles, then issues two configuration calls with them. */

int func_0E2118(int key);
void func_0B0B78(int mode, int a, int b, int c);
void func_0B0BB0(int v);

void func_0A26B8(void)
{
    int x;
    int y;
    int z;

    x = func_0E2118(0xA4B);
    y = func_0E2118(0x9FE);
    z = func_0E2118(0x218);
    func_0B0B78(3, x, y, z);
    func_0B0BB0(10);
}
