/* FRONTEND:0x01B158 -- clears the screen and draws two panels unless a mode is active. */
extern int D_0002FDF8;
extern int D_0002FDFC;

extern void func_00BAD0(int a, int b);
extern int func_001B20(int mode);
extern void func_00E4A8(int x, int y, int w, int h, unsigned int color);
extern void func_00EA70(int tex, int a, int b, int c, int d, int e, int f, int g, int h, unsigned int color);
extern void func_00A9D8(int a);

void func_01B158(void)
{
    func_00BAD0(0, 0);
    if (func_001B20(7) != 0) {
        func_00E4A8(0, 0, 0x1E0, 0x110, 0xFF000000);
    } else {
        func_00E4A8(0, 0, 0x1E0, 0x110, 0xFF000000);
        func_00EA70(D_0002FDF8, -16, -9, 0x100, 0x119, 0, 0, 0x100, 0x110, 0xFFFFFFFF);
        func_00EA70(D_0002FDFC, 0x100, -9, 0x210, 0x119, 0, 0, 0x100, 0x110, 0xFFFFFFFF);
    }
    func_00A9D8(0);
}
