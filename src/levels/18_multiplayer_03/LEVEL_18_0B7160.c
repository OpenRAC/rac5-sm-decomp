/* LEVEL_18:0x0B7160 -- placement copy of LEVEL_16_0B8188.c: fetches three handles, then issues two configuration calls with them. */

int func_10DFE0(int key);
void func_0C5620(int mode, int a, int b, int c);
void func_0C5658(int v);

void func_0B7160(void)
{
    int x;
    int y;
    int z;

    x = func_10DFE0(0xA4B);
    y = func_10DFE0(0x9FE);
    z = func_10DFE0(0x218);
    func_0C5620(3, x, y, z);
    func_0C5658(10);
}
