extern int D_00280B08;
extern unsigned int D_002E7108;
extern int func_10BE80(unsigned int);
extern void func_02B4D0(void);

void func_02B500(void)
{
    D_00280B08 = func_10BE80((D_002E7108 << 16) | 0xa00010c1u);
    func_02B4D0();
}
