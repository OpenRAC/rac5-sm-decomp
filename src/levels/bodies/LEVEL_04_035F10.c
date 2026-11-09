/* LEVEL_04:0x035F10 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_0A5B40(int a);
extern void func_0A5B20(int a);
extern void func_0A5C90(int a, int b);
extern void func_0A5C98(int a, int b);
extern void func_0A5CA0(int a, int b);
extern void func_0A5DB8(int a, int b, int c);
extern void func_0A5DD8(int a, int b, int c, int d, int e);
extern void func_096FA0(int a);
extern void func_0A5DD0(int a);
extern void func_0A5C38(unsigned int a);
extern void func_0A5C80(int a);

void func_035F10(int mode)
{
    if (mode == 0)
        func_0A5B40(4);
    else
        func_0A5B20(4);
    func_0A5B20(9);
    func_0A5B20(5);
    func_0A5B20(1);
    func_0A5C90(1, 1);
    func_0A5C98(0, 1);
    func_0A5CA0(0, 0);
    func_0A5DB8(6, 0, 0xFF);
    func_0A5DD8(0, 2, 3, 0, 0);
    func_096FA0(0);
    if (mode == 1) {
        func_0A5B40(0);
        func_0A5DD0(1);
    } else {
        func_0A5B20(0);
        func_0A5DD0(0);
    }
    func_0A5C38(0xFFFFFFFF);
    func_0A5C80(0);
}
