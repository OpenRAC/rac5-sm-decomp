/* LEVEL_20:0x02B0D0 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_07A2E8(int a);
extern void func_07A2C8(int a);
extern void func_07A440(int a, int b);
extern void func_07A448(int a, int b);
extern void func_07A450(int a, int b);
extern void func_07A568(int a, int b, int c);
extern void func_07A588(int a, int b, int c, int d, int e);
extern void func_072938(int a);
extern void func_07A580(int a);
extern void func_07A3E8(unsigned int a);
extern void func_07A430(int a);

void func_02B0D0(int mode)
{
    if (mode == 0)
        func_07A2E8(4);
    else
        func_07A2C8(4);
    func_07A2C8(9);
    func_07A2C8(5);
    func_07A2C8(1);
    func_07A440(1, 1);
    func_07A448(0, 1);
    func_07A450(0, 0);
    func_07A568(6, 0, 0xFF);
    func_07A588(0, 2, 3, 0, 0);
    func_072938(0);
    if (mode == 1) {
        func_07A2E8(0);
        func_07A580(1);
    } else {
        func_07A2C8(0);
        func_07A580(0);
    }
    func_07A3E8(0xFFFFFFFF);
    func_07A430(0);
}
