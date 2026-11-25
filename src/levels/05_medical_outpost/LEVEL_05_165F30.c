/* LEVEL_05:0x165F30 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_001F6898;
extern int D_001F6894;
extern int D_00283D7C;

extern void func_074458(void);
extern int func_0E91A8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0EB888(int index);
extern int func_1259E0(unsigned int value);

void func_165F30(void)
{
    func_074458();
    D_001F6898 = func_0E91A8(0x10, D_00283D7C, 0, 0, 0, 0, 1);
    func_0EB888(1);
    func_0EB888(0xC);
    D_001F6894 = func_1259E0(0xEDBCF6C4u);
}
