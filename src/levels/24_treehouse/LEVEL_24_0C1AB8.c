/* LEVEL_24:0x0C1AB8 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_001D18B2;
extern unsigned char D_001D1850;
extern int func_1286F8(int a);
extern int func_127FB0(int id);
extern void func_0D08A8(int a, int b, int c, int d);
extern void func_0D08E0(int a);
extern int func_1287A8(void);
extern int func_1292E8(void);
extern int func_128890(void);
extern int func_0D13C8(void);
extern void func_128AB8(void);
extern int func_128818(void);
extern void func_128B10(int value);
extern void func_12B1E0(int *p, int a1);

void func_0C1AB8(int *o)
{
    if (D_001D18B2 == 0) {
        func_12B1E0(o, 0x1D);
        return;
    }
    if (func_1286F8(1) != 0) {
        func_0D08A8(0, func_127FB0(0xA5D), 0, 0);
        func_0D08E0(5);
        return;
    }
    if (func_1287A8() == 0) {
        if (func_1292E8() != 0) {
            D_001D1850 = 0;
            func_128890();
            func_0D13C8();
        }
        func_12B1E0(o, 0x1F);
    } else {
        func_128AB8();
        func_128818();
        func_12B1E0(o, 0x11);
        return;
    }
    func_128B10(1);
}
