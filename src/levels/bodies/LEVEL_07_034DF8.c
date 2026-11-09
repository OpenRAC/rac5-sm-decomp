/* LEVEL_07:0x034DF8 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_0A2930(int a);
extern void func_0A2910(int a);
extern void func_0A2A80(int a, int b);
extern void func_0A2A88(int a, int b);
extern void func_0A2A90(int a, int b);
extern void func_0A2BA8(int a, int b, int c);
extern void func_0A2BC8(int a, int b, int c, int d, int e);
extern void func_095D30(int a);
extern void func_0A2BC0(int a);
extern void func_0A2A28(unsigned int a);
extern void func_0A2A70(int a);

void func_034DF8(int mode)
{
    if (mode == 0)
        func_0A2930(4);
    else
        func_0A2910(4);
    func_0A2910(9);
    func_0A2910(5);
    func_0A2910(1);
    func_0A2A80(1, 1);
    func_0A2A88(0, 1);
    func_0A2A90(0, 0);
    func_0A2BA8(6, 0, 0xFF);
    func_0A2BC8(0, 2, 3, 0, 0);
    func_095D30(0);
    if (mode == 1) {
        func_0A2930(0);
        func_0A2BC0(1);
    } else {
        func_0A2910(0);
        func_0A2BC0(0);
    }
    func_0A2A28(0xFFFFFFFF);
    func_0A2A70(0);
}
