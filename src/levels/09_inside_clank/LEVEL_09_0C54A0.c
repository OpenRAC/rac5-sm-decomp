/* LEVEL_09:0x0C54A0 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_001EAA32;
extern unsigned char D_001EA9D0;
extern int func_12BB90(int a);
extern int func_12B448(int id);
extern void func_0D4200(int a, int b, int c, int d);
extern void func_0D4238(int a);
extern int func_12BC40(void);
extern int func_12C780(void);
extern int func_12BD28(void);
extern int func_0D4D10(void);
extern void func_12BF50(void);
extern int func_12BCB0(void);
extern void func_12BFA8(int value);
extern void func_12E678(int *p, int a1);

void func_0C54A0(int *o)
{
    if (D_001EAA32 == 0) {
        func_12E678(o, 0x1D);
        return;
    }
    if (func_12BB90(1) != 0) {
        func_0D4200(0, func_12B448(0xA5D), 0, 0);
        func_0D4238(5);
        return;
    }
    if (func_12BC40() == 0) {
        if (func_12C780() != 0) {
            D_001EA9D0 = 0;
            func_12BD28();
            func_0D4D10();
        }
        func_12E678(o, 0x1F);
    } else {
        func_12BF50();
        func_12BCB0();
        func_12E678(o, 0x11);
        return;
    }
    func_12BFA8(1);
}
