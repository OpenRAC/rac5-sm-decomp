extern unsigned char D_00212B24;
extern char *D_00208C2C;
extern unsigned char D_0021B709;
extern void func_139650(int);
extern void func_0284C0(void);

void func_0C6B00(void)
{
    if (D_00212B24 != 0)
        func_139650(*(int *)(D_00208C2C + 0x1c6c));
    func_0284C0();
    D_0021B709 = 0;
}
