/* LEVEL_10:0x099E00 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_0A1CD8(int a0);
extern void func_0A1A28(int a0);
extern void func_0A1AE8(int a0);
extern void func_0A1CC8(int a0, int a1, int a2);
extern void func_0A1CB8(int a0, unsigned int a1, unsigned int a2);
extern void func_0A1B28(int a0);
extern void func_0A1BA8(int a0, int a1);
extern void func_0A3D58(void);
extern int *D_0020F9F0;

void func_099E00(void)
{
    func_0A1CD8(0);
    func_0A1A28(5);
    func_0A1AE8(0);
    func_0A1CC8(1, 0, 0);
    func_0A1CB8(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_0A1B28(*D_0020F9F0);
    func_0A1BA8(0, 0);
    func_0A3D58();
}
