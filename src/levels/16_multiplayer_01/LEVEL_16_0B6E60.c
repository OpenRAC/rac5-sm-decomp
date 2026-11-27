/* LEVEL_16:0x0B6E60 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_001AECAA;
extern unsigned char D_001AEC48;
extern int func_10FA78(int a);
extern int func_10F330(int id);
extern void func_0C6648(int a, int b, int c, int d);
extern void func_0C6680(int a);
extern int func_10FB28(void);
extern int func_110558(void);
extern int func_10FBF8(void);
extern int func_0C7158(void);
extern void func_10FD70(void);
extern int func_10FB98(void);
extern void func_10FD98(int value);
extern void func_111DB0(int *p, int a1);

void func_0B6E60(int *o)
{
    if (D_001AECAA == 0) {
        func_111DB0(o, 0x1D);
        return;
    }
    if (func_10FA78(1) != 0) {
        func_0C6648(0, func_10F330(0xA5D), 0, 0);
        func_0C6680(5);
        return;
    }
    if (func_10FB28() == 0) {
        if (func_110558() != 0) {
            D_001AEC48 = 0;
            func_10FBF8();
            func_0C7158();
        }
        func_111DB0(o, 0x1F);
    } else {
        func_10FD70();
        func_10FB98();
        func_111DB0(o, 0x11);
        return;
    }
    func_10FD98(1);
}
