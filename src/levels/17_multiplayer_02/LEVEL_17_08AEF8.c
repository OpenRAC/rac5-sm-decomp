/* LEVEL_17:0x08AEF8 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_08F380(int a0);
extern void func_08F0C0(int a0);
extern void func_08F188(int a0);
extern void func_08F370(int a0, int a1, int a2);
extern void func_08F360(int a0, unsigned int a1, unsigned int a2);
extern void func_08F1C8(int a0);
extern void func_08F250(int a0, int a1);
extern void func_091398(void);
extern int *D_001A7EA0;

void func_08AEF8(int flag)
{
    func_08F380(0);
    func_08F0C0(5);
    func_08F188(0);
    func_08F370(1, 0, 0);
    func_08F360(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_08F1C8(*D_001A7EA0);
    func_08F250(0, 0);
    func_091398();
}
