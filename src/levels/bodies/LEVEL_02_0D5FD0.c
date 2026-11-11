/* LEVEL_02:0x0D5FD0 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_00343EA0[];
extern int *D_00208C2C;
extern int D_00219568[1];
extern int D_00218450;
extern char D_00218459;
extern int D_00218454;
extern int D_002119C8;

extern int *func_0DED88(int *a);
extern unsigned int *func_024F88(int id, int v);
extern unsigned int *func_024FD0(int id, int v);
extern int func_0D5E70(int *obj);
extern int func_0D5E30(int *obj);
extern int func_0D5E50(int *obj);
extern int func_0C2640(void);
extern void func_024C08(int a, int b);
extern void func_0D71C8(void);
extern int func_0BA5B0(int v);
extern int func_025BB8(int a, int b, int c, int d);
extern int func_024F28(int a, int b);
extern void func_025A80(int a, int b, int c, int d);
extern void func_162D40(void);
extern int func_0DF788(int *a, int b);

void func_0D5FD0(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0DED88(D_00343EA0);
    p2 = func_024F88(obj[5], -1);
    p3 = func_024FD0(obj[5], -1);
    D_00219568[0] = 0;
    D_00208C2C[0x71A] = D_00208C2C[0x71A] - D_00218450;
    saved = D_00343EA0[3];
    D_00218459 = 1;
    if (func_0D5E70(obj) != 0) {
        func_024C08(0, func_0C2640() != 0x12);
        func_0D71C8();
    } else if (func_0D5E30(obj) != 0) {
        p2[16] = p2[16] + D_00218454;
        func_0BA5B0(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0D71C8();
    } else if (func_0D5E50(obj) != 0) {
        func_025BB8(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_024F28(obj[5], -1) == 0) {
            D_002119C8 = obj[5];
        }
        func_0D71C8();
    } else {
        func_025A80(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_162D40();
        }
        if (func_024F28(obj[5], -1) == 0 && obj[5] != 7) {
            D_002119C8 = obj[5];
        }
        func_0D71C8();
    }
    func_0DF788(D_00343EA0, saved);
}
