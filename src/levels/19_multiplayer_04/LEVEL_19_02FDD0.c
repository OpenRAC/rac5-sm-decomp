/* LEVEL_19:0x02FDD0 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_08F480(int a);
extern void func_08F460(int a);
extern void func_08F5D8(int a, int b);
extern void func_08F5E0(int a, int b);
extern void func_08F5E8(int a, int b);
extern void func_08F700(int a, int b, int c);
extern void func_08F720(int a, int b, int c, int d, int e);
extern void func_0855B0(int a);
extern void func_08F718(int a);
extern void func_08F580(unsigned int a);
extern void func_08F5C8(int a);

void func_02FDD0(int mode)
{
    if (mode == 0)
        func_08F480(4);
    else
        func_08F460(4);
    func_08F460(9);
    func_08F460(5);
    func_08F460(1);
    func_08F5D8(1, 1);
    func_08F5E0(0, 1);
    func_08F5E8(0, 0);
    func_08F700(6, 0, 0xFF);
    func_08F720(0, 2, 3, 0, 0);
    func_0855B0(0);
    if (mode == 1) {
        func_08F480(0);
        func_08F718(1);
    } else {
        func_08F460(0);
        func_08F718(0);
    }
    func_08F580(0xFFFFFFFF);
    func_08F5C8(0);
}
