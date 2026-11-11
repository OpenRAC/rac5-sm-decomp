/* LEVEL_09:0x0310D0 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_09DBE0(int a);
extern void func_09DBC0(int a);
extern void func_09DD30(int a, int b);
extern void func_09DD38(int a, int b);
extern void func_09DD40(int a, int b);
extern void func_09DE58(int a, int b, int c);
extern void func_09DE78(int a, int b, int c, int d, int e);
extern void func_090600(int a);
extern void func_09DE70(int a);
extern void func_09DCD8(unsigned int a);
extern void func_09DD20(int a);

void func_0310D0(int mode)
{
    if (mode == 0)
        func_09DBE0(4);
    else
        func_09DBC0(4);
    func_09DBC0(9);
    func_09DBC0(5);
    func_09DBC0(1);
    func_09DD30(1, 1);
    func_09DD38(0, 1);
    func_09DD40(0, 0);
    func_09DE58(6, 0, 0xFF);
    func_09DE78(0, 2, 3, 0, 0);
    func_090600(0);
    if (mode == 1) {
        func_09DBE0(0);
        func_09DE70(1);
    } else {
        func_09DBC0(0);
        func_09DE70(0);
    }
    func_09DCD8(0xFFFFFFFF);
    func_09DD20(0);
}
