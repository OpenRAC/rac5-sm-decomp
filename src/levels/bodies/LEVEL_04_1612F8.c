extern char D_003AC358[];
extern void func_15D8E0(void);
extern void func_02E1D0(void *);
void func_1612F8(void)
{
    D_003AC358[0x478] = 0;
    D_003AC358[0x494] = 0;
    func_15D8E0();
    func_02E1D0(D_003AC358 + 0x244);
}