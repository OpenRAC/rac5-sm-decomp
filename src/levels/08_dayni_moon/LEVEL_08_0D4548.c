extern long long func_144728(void);
extern void func_144740(int);
extern void func_0CF680(void);
extern void func_144A88(int);
extern unsigned char D_0023CA51;
extern char *D_0023CB2C;

void func_0D4548(void)
{
    int value = ((int (*)(void))func_144728)();
    func_144740(0);
    if (D_0023CA51 != 0) {
        func_0CF680();
    }
    func_144740(value);
    func_144A88(*(int *)(D_0023CB2C + 0x3c));
}
