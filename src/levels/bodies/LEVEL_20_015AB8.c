/* LEVEL_20:0x015AB8 -- placement copy of LEVEL_16_017CD0.c: calls three helpers on the shared object pointer, then a flag-selected logger. */
extern void func_023BB0(void);
extern int func_0243C8(void);
extern void func_0216E0(int a, int b);
extern void func_0218C0(int a, int b);
extern void func_0B1068(int a, int b, int c);
extern int D_00137A28;

void func_015AB8(void)
{
    func_023BB0();
    func_0243C8();
    func_0216E0(D_00137A28 + 0x3C0, 0);
    func_0218C0(D_00137A28 + 0x14320, 0);
}

void func_015B10(int a)
{
    switch (a) {
    case 1:
        func_0B1068(5, 0x30E, 0x21A);
        break;
    case 0:
    default:
        func_0B1068(4, 0x30D, 0x21A);
        break;
    }
}
