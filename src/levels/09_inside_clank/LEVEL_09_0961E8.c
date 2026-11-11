/* LEVEL_09:0x0961E8 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_09DE70(int a0);
extern void func_09DBC0(int a0);
extern void func_09DC80(int a0);
extern void func_09DE60(int a0, int a1, int a2);
extern void func_09DE50(int a0, unsigned int a1, unsigned int a2);
extern void func_09DCC0(int a0);
extern void func_09DD40(int a0, int a1);
extern void func_09FEF0(void);
extern int *D_001F0890;

void func_0961E8(int flag)
{
    func_09DE70(0);
    func_09DBC0(5);
    func_09DC80(0);
    func_09DE60(1, 0, 0);
    func_09DE50(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_09DCC0(*D_001F0890);
    func_09DD40(0, 0);
    func_09FEF0();
}
