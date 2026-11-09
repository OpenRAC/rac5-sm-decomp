/* LEVEL_21:0x029D40 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_081290(int a);
extern void func_081270(int a);
extern void func_0813E0(int a, int b);
extern void func_0813E8(int a, int b);
extern void func_0813F0(int a, int b);
extern void func_081508(int a, int b, int c);
extern void func_081528(int a, int b, int c, int d, int e);
extern void func_077D68(int a);
extern void func_081520(int a);
extern void func_081388(unsigned int a);
extern void func_0813D0(int a);

void func_029D40(int mode)
{
    if (mode == 0)
        func_081290(4);
    else
        func_081270(4);
    func_081270(9);
    func_081270(5);
    func_081270(1);
    func_0813E0(1, 1);
    func_0813E8(0, 1);
    func_0813F0(0, 0);
    func_081508(6, 0, 0xFF);
    func_081528(0, 2, 3, 0, 0);
    func_077D68(0);
    if (mode == 1) {
        func_081290(0);
        func_081520(1);
    } else {
        func_081270(0);
        func_081520(0);
    }
    func_081388(0xFFFFFFFF);
    func_0813D0(0);
}
