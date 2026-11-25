/* LEVEL_02:0x186FD0 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_0021C958;
extern int D_0021C954;
extern int D_002AF3BC;

extern void func_07BD08(void);
extern int func_0F3218(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0F58F8(int index);
extern int func_130418(unsigned int value);

void func_186FD0(void)
{
    func_07BD08();
    D_0021C958 = func_0F3218(0x10, D_002AF3BC, 0, 0, 0, 0, 1);
    func_0F58F8(1);
    func_0F58F8(0xC);
    D_0021C954 = func_130418(0xEDBCF6C4u);
}
