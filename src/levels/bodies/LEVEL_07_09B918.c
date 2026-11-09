/* LEVEL_07:0x09B918 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_0A2BC0(int a0);
extern void func_0A2910(int a0);
extern void func_0A29D0(int a0);
extern void func_0A2BB0(int a0, int a1, int a2);
extern void func_0A2BA0(int a0, unsigned int a1, unsigned int a2);
extern void func_0A2A10(int a0);
extern void func_0A2A90(int a0, int a1);
extern void func_0A4C40(void);
extern int *D_0021B090;

void func_09B918(void)
{
    func_0A2BC0(0);
    func_0A2910(5);
    func_0A29D0(0);
    func_0A2BB0(1, 0, 0);
    func_0A2BA0(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_0A2A10(*D_0021B090);
    func_0A2A90(0, 0);
    func_0A4C40();
}
