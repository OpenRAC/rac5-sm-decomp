/* LEVEL_16:0x08A4B8 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_08FE88(int a0);
extern void func_08FBC8(int a0);
extern void func_08FC90(int a0);
extern void func_08FE78(int a0, int a1, int a2);
extern void func_08FE68(int a0, unsigned int a1, unsigned int a2);
extern void func_08FCD0(int a0);
extern void func_08FD58(int a0, int a1);
extern void func_091EA0(void);
extern int *D_001B48A0;

void func_08A4B8(void)
{
    func_08FE88(0);
    func_08FBC8(5);
    func_08FC90(0);
    func_08FE78(1, 0, 0);
    func_08FE68(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_08FCD0(*D_001B48A0);
    func_08FD58(0, 0);
    func_091EA0();
}
