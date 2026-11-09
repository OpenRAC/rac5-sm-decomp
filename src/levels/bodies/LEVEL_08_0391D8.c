/* LEVEL_08:0x0391D8 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_0AB228(int a);
extern void func_0AB208(int a);
extern void func_0AB378(int a, int b);
extern void func_0AB380(int a, int b);
extern void func_0AB388(int a, int b);
extern void func_0AB4A0(int a, int b, int c);
extern void func_0AB4C0(int a, int b, int c, int d, int e);
extern void func_09BDC8(int a);
extern void func_0AB4B8(int a);
extern void func_0AB320(unsigned int a);
extern void func_0AB368(int a);

void func_0391D8(int mode)
{
    if (mode == 0)
        func_0AB228(4);
    else
        func_0AB208(4);
    func_0AB208(9);
    func_0AB208(5);
    func_0AB208(1);
    func_0AB378(1, 1);
    func_0AB380(0, 1);
    func_0AB388(0, 0);
    func_0AB4A0(6, 0, 0xFF);
    func_0AB4C0(0, 2, 3, 0, 0);
    func_09BDC8(0);
    if (mode == 1) {
        func_0AB228(0);
        func_0AB4B8(1);
    } else {
        func_0AB208(0);
        func_0AB4B8(0);
    }
    func_0AB320(0xFFFFFFFF);
    func_0AB368(0);
}
