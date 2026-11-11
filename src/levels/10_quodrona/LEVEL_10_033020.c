/* LEVEL_10:0x033020 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_0A1A48(int a);
extern void func_0A1A28(int a);
extern void func_0A1B98(int a, int b);
extern void func_0A1BA0(int a, int b);
extern void func_0A1BA8(int a, int b);
extern void func_0A1CC0(int a, int b, int c);
extern void func_0A1CE0(int a, int b, int c, int d, int e);
extern void func_094218(int a);
extern void func_0A1CD8(int a);
extern void func_0A1B40(unsigned int a);
extern void func_0A1B88(int a);

void func_033020(int mode)
{
    if (mode == 0)
        func_0A1A48(4);
    else
        func_0A1A28(4);
    func_0A1A28(9);
    func_0A1A28(5);
    func_0A1A28(1);
    func_0A1B98(1, 1);
    func_0A1BA0(0, 1);
    func_0A1BA8(0, 0);
    func_0A1CC0(6, 0, 0xFF);
    func_0A1CE0(0, 2, 3, 0, 0);
    func_094218(0);
    if (mode == 1) {
        func_0A1A48(0);
        func_0A1CD8(1);
    } else {
        func_0A1A28(0);
        func_0A1CD8(0);
    }
    func_0A1B40(0xFFFFFFFF);
    func_0A1B88(0);
}
