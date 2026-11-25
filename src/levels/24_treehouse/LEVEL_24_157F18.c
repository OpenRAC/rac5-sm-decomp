/* LEVEL_24:0x157F18 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_001D86F0;
extern int D_001D86EC;
extern int D_00263D7C;

extern void func_06F418(void);
extern int func_0E2F40(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0E7358(int index);
extern int func_11FB68(unsigned int value);

void func_157F18(void)
{
    func_06F418();
    D_001D86F0 = func_0E2F40(0x10, D_00263D7C, 0, 0, 0, 0, 1);
    func_0E7358(1);
    func_0E7358(0xC);
    D_001D86EC = func_11FB68(0xEDBCF6C4u);
}
