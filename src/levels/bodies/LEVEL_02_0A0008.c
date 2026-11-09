/* LEVEL_02:0x0A0008 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_0A74D0(int a0);
extern void func_0A7220(int a0);
extern void func_0A72E0(int a0);
extern void func_0A74C0(int a0, int a1, int a2);
extern void func_0A74B0(int a0, unsigned int a1, unsigned int a2);
extern void func_0A7320(int a0);
extern void func_0A73A0(int a0, int a1);
extern void func_0A9550(void);
extern int *D_0021BD50;

void func_0A0008(void)
{
    func_0A74D0(0);
    func_0A7220(5);
    func_0A72E0(0);
    func_0A74C0(1, 0, 0);
    func_0A74B0(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_0A7320(*D_0021BD50);
    func_0A73A0(0, 0);
    func_0A9550();
}
