/* LEVEL_16:0x030A40 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_08FBE8(int a);
extern void func_08FBC8(int a);
extern void func_08FD48(int a, int b);
extern void func_08FD50(int a, int b);
extern void func_08FD58(int a, int b);
extern void func_08FE70(int a, int b, int c);
extern void func_08FE90(int a, int b, int c, int d, int e);
extern void func_085100(int a);
extern void func_08FE88(int a);
extern void func_08FCE8(unsigned int a);
extern void func_08FD38(int a);

void func_030A40(int mode)
{
    if (mode == 0)
        func_08FBE8(4);
    else
        func_08FBC8(4);
    func_08FBC8(9);
    func_08FBC8(5);
    func_08FBC8(1);
    func_08FD48(1, 1);
    func_08FD50(0, 1);
    func_08FD58(0, 0);
    func_08FE70(6, 0, 0xFF);
    func_08FE90(0, 2, 3, 0, 0);
    func_085100(0);
    if (mode == 1) {
        func_08FBE8(0);
        func_08FE88(1);
    } else {
        func_08FBC8(0);
        func_08FE88(0);
    }
    func_08FCE8(0xFFFFFFFF);
    func_08FD38(0);
}
