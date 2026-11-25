/* LEVEL_07:0x17BAA0 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_0021BDB0;
extern int D_0021BDAC;
extern int D_002AD7BC;

extern void func_077610(void);
extern int func_0EDE68(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0F0548(int index);
extern int func_12D068(unsigned int value);

void func_17BAA0(void)
{
    func_077610();
    D_0021BDB0 = func_0EDE68(0x10, D_002AD7BC, 0, 0, 0, 0, 1);
    func_0F0548(1);
    func_0F0548(0xC);
    D_0021BDAC = func_12D068(0xEDBCF6C4u);
}
