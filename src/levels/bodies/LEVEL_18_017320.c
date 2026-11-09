/* LEVEL_18:0x017320 -- placement copy of LEVEL_16_017CD0.c: calls three helpers on the shared object pointer, then a flag-selected logger. */
extern void func_026658(void);
extern int func_026E70(void);
extern void func_024118(int a, int b);
extern void func_0242F8(int a, int b);
extern void func_0C5B10(int a, int b, int c);
extern int D_001E0428;

void func_017320(void)
{
    func_026658();
    func_026E70();
    func_024118(D_001E0428 + 0x3C0, 0);
    func_0242F8(D_001E0428 + 0x14320, 0);
}

void func_017378(int a)
{
    switch (a) {
    case 1:
        func_0C5B10(5, 0x30E, 0x21A);
        break;
    case 0:
    default:
        func_0C5B10(4, 0x30D, 0x21A);
        break;
    }
}
