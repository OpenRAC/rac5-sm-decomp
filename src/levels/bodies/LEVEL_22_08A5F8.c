/* LEVEL_22:0x08A5F8 -- placement copy of LEVEL_01_099938.c: runs a fixed initialization sequence of helper calls, one of them on a global object pointer. */
extern void func_08F238(int a0);
extern void func_08EF88(int a0);
extern void func_08F048(int a0);
extern void func_08F228(int a0, int a1, int a2);
extern void func_08F218(int a0, unsigned int a1, unsigned int a2);
extern void func_08F088(int a0);
extern void func_08F108(int a0, int a1);
extern void func_091250(void);
extern int *D_00165D70;

void func_08A5F8(int flag)
{
    func_08F238(0);
    func_08EF88(5);
    func_08F048(0);
    func_08F228(1, 0, 0);
    func_08F218(1, 0xFFFFFFFFu, 0xFFFFFFFFu);
    func_08F088(*D_00165D70);
    func_08F108(0, 0);
    func_091250();
}
