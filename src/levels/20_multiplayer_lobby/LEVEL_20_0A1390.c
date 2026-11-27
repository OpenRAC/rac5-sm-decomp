/* LEVEL_20:0x0A1390 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_0011138A;
extern unsigned char D_00111328;
extern int func_0E2860(int a);
extern int func_0E2118(int id);
extern void func_0B0B78(int a, int b, int c, int d);
extern void func_0B0BB0(int a);
extern int func_0E2910(void);
extern int func_0E3340(void);
extern int func_0E29E0(void);
extern int func_0B1688(void);
extern void func_0E2B58(void);
extern int func_0E2980(void);
extern void func_0E2B80(int value);
extern void func_0E4B98(int *p, int a1);

void func_0A1390(int *o)
{
    if (D_0011138A == 0) {
        func_0E4B98(o, 0x1D);
        return;
    }
    if (func_0E2860(1) != 0) {
        func_0B0B78(0, func_0E2118(0xA5D), 0, 0);
        func_0B0BB0(5);
        return;
    }
    if (func_0E2910() == 0) {
        if (func_0E3340() != 0) {
            D_00111328 = 0;
            func_0E29E0();
            func_0B1688();
        }
        func_0E4B98(o, 0x1F);
    } else {
        func_0E2B58();
        func_0E2980();
        func_0E4B98(o, 0x11);
        return;
    }
    func_0E2B80(1);
}
