/* LEVEL_16:0x14FB28 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_001BDA10;
extern int D_001BDA0C;
extern int D_0024E33C;

extern void func_0663A0(void);
extern int func_0D9DE0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0DAAA8(int index);
extern int func_106E98(unsigned int value);

void func_14FB28(void)
{
    func_0663A0();
    D_001BDA10 = func_0D9DE0(0x10, D_0024E33C, 0, 0, 0, 0, 1);
    func_0DAAA8(1);
    func_0DAAA8(0xC);
    D_001BDA0C = func_106E98(0xEDBCF6C4u);
}
