/* LEVEL_05:0x0C6798 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_001EFFB2;
extern unsigned char D_001EFF50;
extern int func_12E570(int a);
extern int func_12DE28(int id);
extern void func_0D54F8(int a, int b, int c, int d);
extern void func_0D5530(int a);
extern int func_12E620(void);
extern int func_12F160(void);
extern int func_12E708(void);
extern int func_0D6008(void);
extern void func_12E930(void);
extern int func_12E690(void);
extern void func_12E988(int value);
extern void func_131058(int *p, int a1);

void func_0C6798(int *o)
{
    if (D_001EFFB2 == 0) {
        func_131058(o, 0x1D);
        return;
    }
    if (func_12E570(1) != 0) {
        func_0D54F8(0, func_12DE28(0xA5D), 0, 0);
        func_0D5530(5);
        return;
    }
    if (func_12E620() == 0) {
        if (func_12F160() != 0) {
            D_001EFF50 = 0;
            func_12E708();
            func_0D6008();
        }
        func_131058(o, 0x1F);
    } else {
        func_12E930();
        func_12E690();
        func_131058(o, 0x11);
        return;
    }
    func_12E988(1);
}
