/* LEVEL_06:0x031318 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_09B100(int a);
extern void func_09B0E0(int a);
extern void func_09B250(int a, int b);
extern void func_09B258(int a, int b);
extern void func_09B260(int a, int b);
extern void func_09B378(int a, int b, int c);
extern void func_09B398(int a, int b, int c, int d, int e);
extern void func_08CAF8(int a);
extern void func_09B390(int a);
extern void func_09B1F8(unsigned int a);
extern void func_09B240(int a);

void func_031318(int mode)
{
    if (mode == 0)
        func_09B100(4);
    else
        func_09B0E0(4);
    func_09B0E0(9);
    func_09B0E0(5);
    func_09B0E0(1);
    func_09B250(1, 1);
    func_09B258(0, 1);
    func_09B260(0, 0);
    func_09B378(6, 0, 0xFF);
    func_09B398(0, 2, 3, 0, 0);
    func_08CAF8(0);
    if (mode == 1) {
        func_09B100(0);
        func_09B390(1);
    } else {
        func_09B0E0(0);
        func_09B390(0);
    }
    func_09B1F8(0xFFFFFFFF);
    func_09B240(0);
}
