extern long long func_0F20B8(void);
extern void func_0F20D0(long long);
extern void func_0A4DA0(void);
extern void func_0F2418(int);
extern unsigned char D_00148B51;
extern char *D_00148C2C;

void func_0A9C68(void)
{
    long long value = func_0F20B8();
    func_0F20D0(0);
    if (D_00148B51 != 0) {
        func_0A4DA0();
    }
    func_0F20D0(value);
    func_0F2418(*(int *)(D_00148C2C + 0x3c));
}
