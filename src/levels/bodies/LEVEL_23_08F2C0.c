/* LEVEL_23:0x08F2C0 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_097900(int a0);
extern void func_097650(int a0);
extern void func_097710(int a0);
extern void func_0978F0(int a0, int a1, int a2);
extern void func_0978E0(int a0, unsigned int a1, unsigned int a2);
extern void func_097750(int a0);
extern void func_0977D0(int a0, int a1);
extern void func_099980(void);
extern int *D_001DA190;

void func_08F2C0(void)
{
    func_097900(0);
    func_097650(5);
    func_097710(0);
    func_0978F0(1, 0, 0);
    func_0978E0(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_097750(*D_001DA190);
    func_0977D0(0, 0);
    func_099980();
}
