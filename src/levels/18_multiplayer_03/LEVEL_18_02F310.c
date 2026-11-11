/* LEVEL_18:0x02F310 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_08EC00(int a);
extern void func_08EBE0(int a);
extern void func_08ED58(int a, int b);
extern void func_08ED60(int a, int b);
extern void func_08ED68(int a, int b);
extern void func_08EE80(int a, int b, int c);
extern void func_08EEA0(int a, int b, int c, int d, int e);
extern void func_084A48(int a);
extern void func_08EE98(int a);
extern void func_08ED00(unsigned int a);
extern void func_08ED48(int a);

void func_02F310(int mode)
{
    if (mode == 0)
        func_08EC00(4);
    else
        func_08EBE0(4);
    func_08EBE0(9);
    func_08EBE0(5);
    func_08EBE0(1);
    func_08ED58(1, 1);
    func_08ED60(0, 1);
    func_08ED68(0, 0);
    func_08EE80(6, 0, 0xFF);
    func_08EEA0(0, 2, 3, 0, 0);
    func_084A48(0);
    if (mode == 1) {
        func_08EC00(0);
        func_08EE98(1);
    } else {
        func_08EBE0(0);
        func_08EE98(0);
    }
    func_08ED00(0xFFFFFFFF);
    func_08ED48(0);
}
