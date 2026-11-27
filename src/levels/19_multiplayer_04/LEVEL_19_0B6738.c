/* LEVEL_19:0x0B6738 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_001AFE2A;
extern unsigned char D_001AFDC8;
extern int func_110118(int a);
extern int func_10F9D0(int id);
extern void func_0C5F20(int a, int b, int c, int d);
extern void func_0C5F58(int a);
extern int func_1101C8(void);
extern int func_110BF8(void);
extern int func_110298(void);
extern int func_0C6A30(void);
extern void func_110410(void);
extern int func_110238(void);
extern void func_110438(int value);
extern void func_112450(int *p, int a1);

void func_0B6738(int *o)
{
    if (D_001AFE2A == 0) {
        func_112450(o, 0x1D);
        return;
    }
    if (func_110118(1) != 0) {
        func_0C5F20(0, func_10F9D0(0xA5D), 0, 0);
        func_0C5F58(5);
        return;
    }
    if (func_1101C8() == 0) {
        if (func_110BF8() != 0) {
            D_001AFDC8 = 0;
            func_110298();
            func_0C6A30();
        }
        func_112450(o, 0x1F);
    } else {
        func_110410();
        func_110238();
        func_112450(o, 0x11);
        return;
    }
    func_110438(1);
}
