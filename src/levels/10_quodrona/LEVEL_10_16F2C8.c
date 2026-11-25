/* LEVEL_10:0x16F2C8 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_00210448;
extern int D_00210444;
extern int D_002A12BC;

extern void func_075AC0(void);
extern int func_0EC9A8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0EF088(int index);
extern int func_127EC8(unsigned int value);

void func_16F2C8(void)
{
    func_075AC0();
    D_00210448 = func_0EC9A8(0x10, D_002A12BC, 0, 0, 0, 0, 1);
    func_0EF088(1);
    func_0EF088(0xC);
    D_00210444 = func_127EC8(0xEDBCF6C4u);
}
