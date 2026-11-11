/* LEVEL_03:0x0996C0 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_0A0940(int a0);
extern void func_0A0690(int a0);
extern void func_0A0750(int a0);
extern void func_0A0930(int a0, int a1, int a2);
extern void func_0A0920(int a0, unsigned int a1, unsigned int a2);
extern void func_0A0790(int a0);
extern void func_0A0810(int a0, int a1);
extern void func_0A29C0(void);
extern int *D_0021F410;

void func_0996C0(int flag)
{
    func_0A0940(0);
    func_0A0690(5);
    func_0A0750(0);
    func_0A0930(1, 0, 0);
    func_0A0920(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_0A0790(*D_0021F410);
    func_0A0810(0, 0);
    func_0A29C0();
}
