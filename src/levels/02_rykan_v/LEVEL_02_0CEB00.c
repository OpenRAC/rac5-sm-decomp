/* LEVEL_02:0x0CEB00 -- placement copy of FRONTEND_018228.c: picks the next menu step for the object from the feature flag and the shared checks. */
extern unsigned char D_00215BF2;
extern unsigned char D_00215B90;
extern int func_138FA8(int a);
extern int func_138860(int id);
extern void func_0DD8E0(int a, int b, int c, int d);
extern void func_0DD918(int a);
extern int func_139058(void);
extern int func_139B98(void);
extern int func_139140(void);
extern int func_0DE3F0(void);
extern void func_139368(void);
extern int func_1390C8(void);
extern void func_1393C0(int value);
extern void func_13BA90(int *p, int a1);

void func_0CEB00(int *o)
{
    if (D_00215BF2 == 0) {
        func_13BA90(o, 0x1D);
        return;
    }
    if (func_138FA8(1) != 0) {
        func_0DD8E0(0, func_138860(0xA5D), 0, 0);
        func_0DD918(5);
        return;
    }
    if (func_139058() == 0) {
        if (func_139B98() != 0) {
            D_00215B90 = 0;
            func_139140();
            func_0DE3F0();
        }
        func_13BA90(o, 0x1F);
    } else {
        func_139368();
        func_1390C8();
        func_13BA90(o, 0x11);
        return;
    }
    func_1393C0(1);
}
