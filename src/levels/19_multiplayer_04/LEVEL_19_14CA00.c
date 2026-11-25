/* LEVEL_19:0x14CA00 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_001BEB70;
extern int D_001BEB6C;
extern int D_0024E4BC;

extern void func_066590(void);
extern int func_0D84A0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0D9168(int index);
extern int func_107538(unsigned int value);

void func_14CA00(void)
{
    func_066590();
    D_001BEB70 = func_0D84A0(0x10, D_0024E4BC, 0, 0, 0, 0, 1);
    func_0D9168(1);
    func_0D9168(0xC);
    D_001BEB6C = func_107538(0xEDBCF6C4u);
}
