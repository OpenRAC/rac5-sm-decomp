/* LEVEL_03:0x16D0D8 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_0021FE78;
extern int D_0021FE74;
extern int D_002B2D3C;

extern void func_075210(void);
extern int func_0EB900(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0EDFE0(int index);
extern int func_1282D0(unsigned int value);

void func_16D0D8(void)
{
    func_075210();
    D_0021FE78 = func_0EB900(0x10, D_002B2D3C, 0, 0, 0, 0, 1);
    func_0EDFE0(1);
    func_0EDFE0(0xC);
    D_0021FE74 = func_1282D0(0xEDBCF6C4u);
}
