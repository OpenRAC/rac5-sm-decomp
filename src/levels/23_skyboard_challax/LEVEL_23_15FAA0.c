/* LEVEL_23:0x15FAA0 -- placement copy of LEVEL_01_171B98.c: resets the sound system, registers the first effect with the global handle, stores the returned ids in globals and pre-loads two banks. */
extern int D_001DAF00;
extern int D_001DAEFC;
extern int D_002692FC;

extern void func_06F118(void);
extern int func_0DFF50(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0E2630(int index);
extern int func_11AEE0(unsigned int value);

void func_15FAA0(void)
{
    func_06F118();
    D_001DAF00 = func_0DFF50(0x10, D_002692FC, 0, 0, 0, 0, 1);
    func_0E2630(1);
    func_0E2630(0xC);
    D_001DAEFC = func_11AEE0(0xEDBCF6C4u);
}
