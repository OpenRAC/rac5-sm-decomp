/* LEVEL_17:0x017680 -- placement copy of LEVEL_16_017CD0.c: calls three helpers on the shared object pointer, then a flag-selected logger. */
extern void func_026A28(void);
extern int func_027240(void);
extern void func_0244E8(int a, int b);
extern void func_0246C8(int a, int b);
extern int func_0C6078(int key, int state, int arg);
extern int D_001D13A8;

void func_017680(void)
{
    func_026A28();
    func_027240();
    func_0244E8(D_001D13A8 + 0x3C0, 0);
    func_0246C8(D_001D13A8 + 0x14320, 0);
}

void func_0176D8(int a)
{
    switch (a) {
    case 1:
        func_0C6078(5, 0x30E, 0x21A);
        break;
    case 0:
    default:
        func_0C6078(4, 0x30D, 0x21A);
        break;
    }
}
