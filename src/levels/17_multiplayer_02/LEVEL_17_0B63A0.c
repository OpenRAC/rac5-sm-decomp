/* LEVEL_17:0x0B63A0 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_001A22AA;
extern unsigned char D_001A2248;
extern int func_10EFF0(int a);
extern int func_10E8A8(int id);
extern void func_0C5B88(int a, int b, int c, int d);
extern void func_0C5BC0(int a);
extern int func_10F0A0(void);
extern int func_10FAD0(void);
extern int func_10F170(void);
extern int func_0C6698(void);
extern void func_10F2E8(void);
extern int func_10F110(void);
extern void func_10F310(int value);
extern void func_111328(int *p, int a1);

void func_0B63A0(int *o)
{
    if (D_001A22AA == 0) {
        func_111328(o, 0x1D);
        return;
    }
    if (func_10EFF0(1) != 0) {
        func_0C5B88(0, func_10E8A8(0xA5D), 0, 0);
        func_0C5BC0(5);
        return;
    }
    if (func_10F0A0() == 0) {
        if (func_10FAD0() != 0) {
            D_001A2248 = 0;
            func_10F170();
            func_0C6698();
        }
        func_111328(o, 0x1F);
    } else {
        func_10F2E8();
        func_10F110();
        func_111328(o, 0x11);
        return;
    }
    func_10F310(1);
}
