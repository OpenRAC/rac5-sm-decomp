/* LEVEL_20:0x077BF8 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_07A580(int a0);
extern void func_07A2C8(int a0);
extern void func_07A390(int a0);
extern void func_07A570(int a0, int a1, int a2);
extern void func_07A560(int a0, unsigned int a1, unsigned int a2);
extern void func_07A3D0(int a0);
extern void func_07A450(int a0, int a1);
extern void func_07C598(void);
extern int *D_00116F80;

void func_077BF8(void)
{
    func_07A580(0);
    func_07A2C8(5);
    func_07A390(0);
    func_07A570(1, 0, 0);
    func_07A560(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_07A3D0(*D_00116F80);
    func_07A450(0, 0);
    func_07C598();
}
