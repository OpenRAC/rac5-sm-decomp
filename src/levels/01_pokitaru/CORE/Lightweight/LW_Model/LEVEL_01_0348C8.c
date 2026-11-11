/* LEVEL_01:0x0348C8 -- applies a fixed batch of renderer state calls for the given mode. */
extern void func_0A0928(int a);
extern void func_0A0908(int a);
extern void func_0A0A80(int a, int b);
extern void func_0A0A88(int a, int b);
extern void func_0A0A90(int a, int b);
extern void func_0A0BA8(int a, int b, int c);
extern void func_0A0BC8(int a, int b, int c, int d, int e);
extern void func_093EA8(int a);
extern void func_0A0BC0(int a);
extern void func_0A0A20(unsigned int a);
extern void func_0A0A70(int a);

void func_0348C8(int mode)
{
    if (mode == 0)
        func_0A0928(4);
    else
        func_0A0908(4);
    func_0A0908(9);
    func_0A0908(5);
    func_0A0908(1);
    func_0A0A80(1, 1);
    func_0A0A88(0, 1);
    func_0A0A90(0, 0);
    func_0A0BA8(6, 0, 0xFF);
    func_0A0BC8(0, 2, 3, 0, 0);
    func_093EA8(0);
    if (mode == 1) {
        func_0A0928(0);
        func_0A0BC0(1);
    } else {
        func_0A0908(0);
        func_0A0BC0(0);
    }
    func_0A0A20(0xFFFFFFFF);
    func_0A0A70(0);
}
