/* LEVEL_22:0x02AAC0 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_08EFA8(int a);
extern void func_08EF88(int a);
extern void func_08F0F8(int a, int b);
extern void func_08F100(int a, int b);
extern void func_08F108(int a, int b);
extern void func_08F220(int a, int b, int c);
extern void func_08F240(int a, int b, int c, int d, int e);
extern void func_084C78(int a);
extern void func_08F238(int a);
extern void func_08F0A0(unsigned int a);
extern void func_08F0E8(int a);

void func_02AAC0(int mode)
{
    if (mode == 0)
        func_08EFA8(4);
    else
        func_08EF88(4);
    func_08EF88(9);
    func_08EF88(5);
    func_08EF88(1);
    func_08F0F8(1, 1);
    func_08F100(0, 1);
    func_08F108(0, 0);
    func_08F220(6, 0, 0xFF);
    func_08F240(0, 2, 3, 0, 0);
    func_084C78(0);
    if (mode == 1) {
        func_08EFA8(0);
        func_08F238(1);
    } else {
        func_08EF88(0);
        func_08F238(0);
    }
    func_08F0A0(0xFFFFFFFF);
    func_08F0E8(0);
}
