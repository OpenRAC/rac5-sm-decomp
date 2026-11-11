/* LEVEL_16:0x0B8188 -- fetches three handles, then issues two configuration calls with them. */

int func_10F330(int key);
void func_0C6648(int mode, int a, int b, int c);
void func_0C6680(int v);

void func_0B8188(void)
{
    int x;
    int y;
    int z;

    x = func_10F330(0xA4B);
    y = func_10F330(0x9FE);
    z = func_10F330(0x218);
    func_0C6648(3, x, y, z);
    func_0C6680(10);
}
