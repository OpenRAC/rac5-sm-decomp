/* LEVEL_22:0x0B66A0 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_0015FFB2;
extern unsigned char D_0015FF50;
extern int func_10A0C8(int a);
extern int func_109980(int id);
extern void func_0C5490(int a, int b, int c, int d);
extern void func_0C54C8(int a);
extern int func_10A178(void);
extern int func_10ACB8(void);
extern int func_10A260(void);
extern int func_0C5FA0(void);
extern void func_10A488(void);
extern int func_10A1E8(void);
extern void func_10A4E0(int value);
extern void func_10CBB0(int *p, int a1);

void func_0B66A0(int *o)
{
    if (D_0015FFB2 == 0) {
        func_10CBB0(o, 0x1D);
        return;
    }
    if (func_10A0C8(1) != 0) {
        func_0C5490(0, func_109980(0xA5D), 0, 0);
        func_0C54C8(5);
        return;
    }
    if (func_10A178() == 0) {
        if (func_10ACB8() != 0) {
            D_0015FF50 = 0;
            func_10A260();
            func_0C5FA0();
        }
        func_10CBB0(o, 0x1F);
    } else {
        func_10A488();
        func_10A1E8();
        func_10CBB0(o, 0x11);
        return;
    }
    func_10A4E0(1);
}
