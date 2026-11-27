/* LEVEL_03:0x0C7FD8 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_002192B2;
extern unsigned char D_00219250;
extern int func_130FC0(int a);
extern int func_130878(int id);
extern void func_0D6D38(int a, int b, int c, int d);
extern void func_0D6D70(int a);
extern int func_131070(void);
extern int func_131BB0(void);
extern int func_131158(void);
extern int func_0D7848(void);
extern void func_131380(void);
extern int func_1310E0(void);
extern void func_1313D8(int value);
extern void func_133AA8(int *p, int a1);

void func_0C7FD8(int *o)
{
    if (D_002192B2 == 0) {
        func_133AA8(o, 0x1D);
        return;
    }
    if (func_130FC0(1) != 0) {
        func_0D6D38(0, func_130878(0xA5D), 0, 0);
        func_0D6D70(5);
        return;
    }
    if (func_131070() == 0) {
        if (func_131BB0() != 0) {
            D_00219250 = 0;
            func_131158();
            func_0D7848();
        }
        func_133AA8(o, 0x1F);
    } else {
        func_131380();
        func_1310E0();
        func_133AA8(o, 0x11);
        return;
    }
    func_1313D8(1);
}
