/* LEVEL_01:0x171B98 -- resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_002077E8;
extern int D_002077E4;
extern int D_00297EBC;

extern void func_075420(void);
extern int func_0ED068(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0EF748(int index);
extern int func_12A068(unsigned int value);

void func_171B98(void)
{
    func_075420();
    D_002077E8 = func_0ED068(0x10, D_00297EBC, 0, 0, 0, 0, 1);
    func_0EF748(1);
    func_0EF748(0xC);
    D_002077E4 = func_12A068(0xEDBCF6C4u);
}
