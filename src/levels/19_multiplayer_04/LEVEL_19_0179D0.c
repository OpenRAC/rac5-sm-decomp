/* LEVEL_19:0x0179D0 -- placement copy of LEVEL_16_017CD0.c: calls three helpers on the shared object pointer, then a flag-selected logger. */
extern void func_026C50(void);
extern int func_027468(void);
extern void func_024710(int a, int b);
extern void func_0248F0(int a, int b);
extern int func_0C6410(int key, int state, int arg);
extern int D_001E0228;

void func_0179D0(void)
{
    func_026C50();
    func_027468();
    func_024710(D_001E0228 + 0x3C0, 0);
    func_0248F0(D_001E0228 + 0x14320, 0);
}

void func_017A28(int a)
{
    switch (a) {
    case 1:
        func_0C6410(5, 0x30E, 0x21A);
        break;
    case 0:
    default:
        func_0C6410(4, 0x30D, 0x21A);
        break;
    }
}
