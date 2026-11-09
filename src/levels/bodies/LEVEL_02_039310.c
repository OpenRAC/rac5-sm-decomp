/* LEVEL_02:0x039310 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_0A7240(int a);
extern void func_0A7220(int a);
extern void func_0A7390(int a, int b);
extern void func_0A7398(int a, int b);
extern void func_0A73A0(int a, int b);
extern void func_0A74B8(int a, int b, int c);
extern void func_0A74D8(int a, int b, int c, int d, int e);
extern void func_09A578(int a);
extern void func_0A74D0(int a);
extern void func_0A7338(unsigned int a);
extern void func_0A7380(int a);

void func_039310(int mode)
{
    if (mode == 0)
        func_0A7240(4);
    else
        func_0A7220(4);
    func_0A7220(9);
    func_0A7220(5);
    func_0A7220(1);
    func_0A7390(1, 1);
    func_0A7398(0, 1);
    func_0A73A0(0, 0);
    func_0A74B8(6, 0, 0xFF);
    func_0A74D8(0, 2, 3, 0, 0);
    func_09A578(0);
    if (mode == 1) {
        func_0A7240(0);
        func_0A74D0(1);
    } else {
        func_0A7220(0);
        func_0A74D0(0);
    }
    func_0A7338(0xFFFFFFFF);
    func_0A7380(0);
}
