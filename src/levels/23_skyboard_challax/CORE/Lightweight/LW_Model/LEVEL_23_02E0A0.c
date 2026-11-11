/* LEVEL_23:0x02E0A0 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_097670(int a);
extern void func_097650(int a);
extern void func_0977C0(int a, int b);
extern void func_0977C8(int a, int b);
extern void func_0977D0(int a, int b);
extern void func_0978E8(int a, int b, int c);
extern void func_097908(int a, int b, int c, int d, int e);
extern void func_0898C8(int a);
extern void func_097900(int a);
extern void func_097768(unsigned int a);
extern void func_0977B0(int a);

void func_02E0A0(int mode)
{
    if (mode == 0)
        func_097670(4);
    else
        func_097650(4);
    func_097650(9);
    func_097650(5);
    func_097650(1);
    func_0977C0(1, 1);
    func_0977C8(0, 1);
    func_0977D0(0, 0);
    func_0978E8(6, 0, 0xFF);
    func_097908(0, 2, 3, 0, 0);
    func_0898C8(0);
    if (mode == 1) {
        func_097670(0);
        func_097900(1);
    } else {
        func_097650(0);
        func_097900(0);
    }
    func_097768(0xFFFFFFFF);
    func_0977B0(0);
}
