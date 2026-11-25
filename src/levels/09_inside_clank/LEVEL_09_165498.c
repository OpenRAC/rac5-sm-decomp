/* LEVEL_09:0x165498 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_001F12F8;
extern int D_001F12F4;
extern int D_0027F63C;

extern void func_071F28(void);
extern int func_0E8F48(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0EB628(int index);
extern int func_123000(unsigned int value);

void func_165498(void)
{
    func_071F28();
    D_001F12F8 = func_0E8F48(0x10, D_0027F63C, 0, 0, 0, 0, 1);
    func_0EB628(1);
    func_0EB628(0xC);
    D_001F12F4 = func_123000(0xEDBCF6C4u);
}
