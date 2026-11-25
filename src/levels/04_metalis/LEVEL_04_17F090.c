/* LEVEL_04:0x17F090 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_00221008;
extern int D_00221004;
extern int D_002B26BC;

extern void func_0779B8(void);
extern int func_0F2868(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0F6C80(int index);
extern int func_1364E8(unsigned int value);

void func_17F090(void)
{
    func_0779B8();
    D_00221008 = func_0F2868(0x10, D_002B26BC, 0, 0, 0, 0, 1);
    func_0F6C80(1);
    func_0F6C80(0xC);
    D_00221004 = func_1364E8(0xEDBCF6C4u);
}
