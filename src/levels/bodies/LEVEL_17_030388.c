/* LEVEL_17:0x030388 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_08F0E0(int a);
extern void func_08F0C0(int a);
extern void func_08F240(int a, int b);
extern void func_08F248(int a, int b);
extern void func_08F250(int a, int b);
extern void func_08F368(int a, int b, int c);
extern void func_08F388(int a, int b, int c, int d, int e);
extern void func_085B40(int a);
extern void func_08F380(int a);
extern void func_08F1E0(unsigned int a);
extern void func_08F230(int a);

void func_030388(int mode)
{
    if (mode == 0)
        func_08F0E0(4);
    else
        func_08F0C0(4);
    func_08F0C0(9);
    func_08F0C0(5);
    func_08F0C0(1);
    func_08F240(1, 1);
    func_08F248(0, 1);
    func_08F250(0, 0);
    func_08F368(6, 0, 0xFF);
    func_08F388(0, 2, 3, 0, 0);
    func_085B40(0);
    if (mode == 1) {
        func_08F0E0(0);
        func_08F380(1);
    } else {
        func_08F0C0(0);
        func_08F380(0);
    }
    func_08F1E0(0xFFFFFFFF);
    func_08F230(0);
}
