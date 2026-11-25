/* LEVEL_18:0x14E2A0 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_001BEED0;
extern int D_001BEECC;
extern int D_0024E6BC;

extern void func_065BF0(void);
extern int func_0D7BA0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0D8868(int index);
extern int func_105B48(unsigned int value);

void func_14E2A0(void)
{
    func_065BF0();
    D_001BEED0 = func_0D7BA0(0x10, D_0024E6BC, 0, 0, 0, 0, 1);
    func_0D8868(1);
    func_0D8868(0xC);
    D_001BEECC = func_105B48(0xEDBCF6C4u);
}
