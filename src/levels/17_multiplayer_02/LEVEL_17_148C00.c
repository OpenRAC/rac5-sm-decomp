/* LEVEL_17:0x148C00 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_001B0FD0;
extern int D_001B0FCC;
extern int D_0023F63C;

extern void func_066B60(void);
extern int func_0D8D08(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0D99D0(int index);
extern int func_106410(unsigned int value);

void func_148C00(void)
{
    func_066B60();
    D_001B0FD0 = func_0D8D08(0x10, D_0023F63C, 0, 0, 0, 0, 1);
    func_0D99D0(1);
    func_0D99D0(0xC);
    D_001B0FCC = func_106410(0xEDBCF6C4u);
}
