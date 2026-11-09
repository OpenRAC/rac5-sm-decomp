/* LEVEL_05:0x0325D8 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_09EEE0(int a);
extern void func_09EEC0(int a);
extern void func_09F038(int a, int b);
extern void func_09F040(int a, int b);
extern void func_09F048(int a, int b);
extern void func_09F160(int a, int b, int c);
extern void func_09F188(int a, int b, int c, int d, int e);
extern void func_0915A0(int a);
extern void func_09F180(int a);
extern void func_09EFD8(unsigned int a);
extern void func_09F028(int a);

void func_0325D8(int mode)
{
    if (mode == 0)
        func_09EEE0(4);
    else
        func_09EEC0(4);
    func_09EEC0(9);
    func_09EEC0(5);
    func_09EEC0(1);
    func_09F038(1, 1);
    func_09F040(0, 1);
    func_09F048(0, 0);
    func_09F160(6, 0, 0xFF);
    func_09F188(0, 2, 3, 0, 0);
    func_0915A0(0);
    if (mode == 1) {
        func_09EEE0(0);
        func_09F180(1);
    } else {
        func_09EEC0(0);
        func_09F180(0);
    }
    func_09EFD8(0xFFFFFFFF);
    func_09F028(0);
}
