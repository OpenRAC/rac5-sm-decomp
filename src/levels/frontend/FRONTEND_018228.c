/* FRONTEND:0x018228 -- picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_000304B2;
extern unsigned char D_00030454;
extern int func_0205B8(int a);
extern int func_01F778(int id);
extern void func_0140E0(int a, int b, int c, int d);
extern void func_014118(int a);
extern int func_020668(void);
extern int func_021188(void);
extern void func_020750(void);
extern int func_0158B0(void);
extern void func_020988(void);
extern int func_0206D8(void);
extern void func_0209E0(int value);
extern void func_0229A0(int *p, int a1);

void func_018228(int *o)
{
    if (D_000304B2 == 0) {
        func_0229A0(o, 0x1D);
        return;
    }
    if (func_0205B8(1) != 0) {
        func_0140E0(0, func_01F778(0xA5D), 0, 0);
        func_014118(5);
        return;
    }
    if (func_020668() == 0) {
        if (func_021188() != 0) {
            D_00030454 = 0;
            func_020750();
            func_0158B0();
        }
        func_0229A0(o, 0x1F);
    } else {
        func_020988();
        func_0206D8();
        func_0229A0(o, 0x11);
        return;
    }
    func_0209E0(1);
}
