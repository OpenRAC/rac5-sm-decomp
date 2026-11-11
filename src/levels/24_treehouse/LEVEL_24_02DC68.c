/* LEVEL_24:0x02DC68 -- placement copy of LEVEL_01_0348C8.c: applies a fixed batch of renderer state calls for the given mode. */
extern void func_09A1A8(int a);
extern void func_09A188(int a);
extern void func_09A2F8(int a, int b);
extern void func_09A300(int a, int b);
extern void func_09A308(int a, int b);
extern void func_09A420(int a, int b, int c);
extern void func_09A440(int a, int b, int c, int d, int e);
extern void func_08CCA8(int a);
extern void func_09A438(int a);
extern void func_09A2A0(unsigned int a);
extern void func_09A2E8(int a);

void func_02DC68(int mode)
{
    if (mode == 0)
        func_09A1A8(4);
    else
        func_09A188(4);
    func_09A188(9);
    func_09A188(5);
    func_09A188(1);
    func_09A2F8(1, 1);
    func_09A300(0, 1);
    func_09A308(0, 0);
    func_09A420(6, 0, 0xFF);
    func_09A440(0, 2, 3, 0, 0);
    func_08CCA8(0);
    if (mode == 1) {
        func_09A1A8(0);
        func_09A438(1);
    } else {
        func_09A188(0);
        func_09A438(0);
    }
    func_09A2A0(0xFFFFFFFF);
    func_09A2E8(0);
}
