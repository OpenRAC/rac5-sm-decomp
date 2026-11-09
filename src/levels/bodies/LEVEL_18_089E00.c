/* LEVEL_18:0x089E00 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_08EE98(int a0);
extern void func_08EBE0(int a0);
extern void func_08ECA8(int a0);
extern void func_08EE88(int a0, int a1, int a2);
extern void func_08EE78(int a0, unsigned int a1, unsigned int a2);
extern void func_08ECE8(int a0);
extern void func_08ED68(int a0, int a1);
extern void func_090EB0(void);
extern int *D_001B5D20;

void func_089E00(void)
{
    func_08EE98(0);
    func_08EBE0(5);
    func_08ECA8(0);
    func_08EE88(1, 0, 0);
    func_08EE78(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_08ECE8(*D_001B5D20);
    func_08ED68(0, 0);
    func_090EB0();
}
