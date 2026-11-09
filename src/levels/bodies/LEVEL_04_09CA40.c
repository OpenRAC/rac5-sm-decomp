/* LEVEL_04:0x09CA40 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_0A5DD0(int a0);
extern void func_0A5B20(int a0);
extern void func_0A5BE0(int a0);
extern void func_0A5DC0(int a0, int a1, int a2);
extern void func_0A5DB0(int a0, unsigned int a1, unsigned int a2);
extern void func_0A5C20(int a0);
extern void func_0A5CA0(int a0, int a1);
extern void func_0A7E50(void);
extern int *D_002201B0;

void func_09CA40(void)
{
    func_0A5DD0(0);
    func_0A5B20(5);
    func_0A5BE0(0);
    func_0A5DC0(1, 0, 0);
    func_0A5DB0(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_0A5C20(*D_002201B0);
    func_0A5CA0(0, 0);
    func_0A7E50();
}
