/* LEVEL_05:0x096F98 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_09F180(int a0);
extern void func_09EEC0(int a0);
extern void func_09EF80(int a0);
extern void func_09F168(int a0, int a1, int a2);
extern void func_09F158(int a0, unsigned int a1, unsigned int a2);
extern void func_09EFC0(int a0);
extern void func_09F048(int a0, int a1);
extern void func_0A1200(void);
extern int *D_001F5E10;

void func_096F98(void)
{
    func_09F180(0);
    func_09EEC0(5);
    func_09EF80(0);
    func_09F168(1, 0, 0);
    func_09F158(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_09EFC0(*D_001F5E10);
    func_09F048(0, 0);
    func_0A1200();
}
