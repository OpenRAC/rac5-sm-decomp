/* LEVEL_08:0x18C6B8 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_00250B38;
extern int D_00250B34;
extern int D_002E713C;

extern void func_07C538(void);
extern int func_0F6D60(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0FB190(int index);
extern int func_13B5A0(unsigned int value);

void func_18C6B8(void)
{
    func_07C538();
    D_00250B38 = func_0F6D60(0x10, D_002E713C, 0, 0, 0, 0, 1);
    func_0FB190(1);
    func_0FB190(0xC);
    D_00250B34 = func_13B5A0(0xEDBCF6C4u);
}
