extern int D_001E0708;
extern unsigned int D_0024E488;
extern int func_0E7280(unsigned int);
extern void func_028548(void);

void func_028578(void)
{
    D_001E0708 = func_0E7280((D_0024E488 << 16) | 0xa00010c1u);
    func_028548();
}
