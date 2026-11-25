/* LEVEL_06:0x160DD8 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_001F6398;
extern int D_001F6394;
extern int D_00284C3C;

extern void func_0712C8(void);
extern int func_0E6128(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0E8808(int index);
extern int func_1206C0(unsigned int value);

void func_160DD8(void)
{
    func_0712C8();
    D_001F6398 = func_0E6128(0x10, D_00284C3C, 0, 0, 0, 0, 1);
    func_0E8808(1);
    func_0E8808(0xC);
    D_001F6394 = func_1206C0(0xEDBCF6C4u);
}
