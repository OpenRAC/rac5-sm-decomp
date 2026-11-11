/* LEVEL_19:0x08A968 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_08F718(int a0);
extern void func_08F460(int a0);
extern void func_08F528(int a0);
extern void func_08F708(int a0, int a1, int a2);
extern void func_08F6F8(int a0, unsigned int a1, unsigned int a2);
extern void func_08F568(int a0);
extern void func_08F5E8(int a0, int a1);
extern void func_091730(void);
extern int *D_001B5A20;

void func_08A968(int flag)
{
    func_08F718(0);
    func_08F460(5);
    func_08F528(0);
    func_08F708(1, 0, 0);
    func_08F6F8(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_08F568(*D_001B5A20);
    func_08F5E8(0, 0);
    func_091730();
}
