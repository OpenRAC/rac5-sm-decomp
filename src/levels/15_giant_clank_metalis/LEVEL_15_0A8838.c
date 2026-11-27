/* LEVEL_15:0x0A8838 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_001558B2;
extern unsigned char D_00155850;
extern int func_0F1AC0(int a);
extern int func_0F1378(int id);
extern void func_0B7590(int a, int b, int c, int d);
extern void func_0B75C8(int a);
extern int func_0F1B70(void);
extern int func_0F26B0(void);
extern int func_0F1C58(void);
extern int func_0B80A0(void);
extern void func_0F1E80(void);
extern int func_0F1BE0(void);
extern void func_0F1ED8(int value);
extern void func_0F45A8(int *p, int a1);

void func_0A8838(int *o)
{
    if (D_001558B2 == 0) {
        func_0F45A8(o, 0x1D);
        return;
    }
    if (func_0F1AC0(1) != 0) {
        func_0B7590(0, func_0F1378(0xA5D), 0, 0);
        func_0B75C8(5);
        return;
    }
    if (func_0F1B70() == 0) {
        if (func_0F26B0() != 0) {
            D_00155850 = 0;
            func_0F1C58();
            func_0B80A0();
        }
        func_0F45A8(o, 0x1F);
    } else {
        func_0F1E80();
        func_0F1BE0();
        func_0F45A8(o, 0x11);
        return;
    }
    func_0F1ED8(1);
}
