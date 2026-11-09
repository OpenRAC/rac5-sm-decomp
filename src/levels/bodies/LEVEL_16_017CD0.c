/* LEVEL_16:0x017CD0 -- calls three helpers on the shared object pointer, then a flag-selected logger. */
extern void func_0270A8(void);
extern int func_0278C0(void);
extern void func_024B68(int a, int b);
extern void func_024D48(int a, int b);
extern void func_0C6B38(int a, int b, int c);
extern int D_001E00A8;

void func_017CD0(void)
{
    func_0270A8();
    func_0278C0();
    func_024B68(D_001E00A8 + 0x3C0, 0);
    func_024D48(D_001E00A8 + 0x14320, 0);
}

void func_017D28(int a)
{
    switch (a) {
    case 1:
        func_0C6B38(5, 0x30E, 0x21A);
        break;
    case 0:
    default:
        func_0C6B38(4, 0x30D, 0x21A);
        break;
    }
}
