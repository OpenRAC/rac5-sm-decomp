/* LEVEL_08:0x0D3118 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_00249AF2;
extern unsigned char D_00249A90;
extern int func_144130(int a);
extern int func_1439E8(int id);
extern void func_0E1F10(int a, int b, int c, int d);
extern void func_0E1F48(int a);
extern int func_1441E0(void);
extern int func_144D20(void);
extern int func_1442C8(void);
extern int func_0E2A30(void);
extern void func_1444F0(void);
extern int func_144250(void);
extern void func_144548(int value);
extern void func_146C18(int *p, int a1);

void func_0D3118(int *o)
{
    if (D_00249AF2 == 0) {
        func_146C18(o, 0x1D);
        return;
    }
    if (func_144130(1) != 0) {
        func_0E1F10(0, func_1439E8(0xA5D), 0, 0);
        func_0E1F48(5);
        return;
    }
    if (func_1441E0() == 0) {
        if (func_144D20() != 0) {
            D_00249A90 = 0;
            func_1442C8();
            func_0E2A30();
        }
        func_146C18(o, 0x1F);
    } else {
        func_1444F0();
        func_144250();
        func_146C18(o, 0x11);
        return;
    }
    func_144548(1);
}
