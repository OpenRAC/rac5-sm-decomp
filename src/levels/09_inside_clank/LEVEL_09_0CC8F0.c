/* LEVEL_09:0x0CC8F0 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_00314120[];
extern int *D_001DDDAC;
extern int D_001EE3A8[1];
extern int D_001ED290;
extern char D_001ED299;
extern int D_001ED294;
extern int D_001E6808;

extern int *func_0D56A8(int *a);
extern unsigned int *func_023920(int id, int v);
extern unsigned int *func_023968(int id, int v);
extern int func_0CC790(int *obj);
extern int func_0CC750(int *obj);
extern int func_0CC770(int *obj);
extern int func_0B8FE0(void);
extern void func_0235A0(int a, int b);
extern void func_0CDAE8(void);
extern int func_0B0F50(int v);
extern int func_024550(int a, int b, int c, int d);
extern int func_0238C0(int a, int b);
extern void func_024418(int a, int b, int c, int d);
extern void func_14F398(void);
extern int func_0D60A8(int *a, int b);

void func_0CC8F0(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0D56A8(D_00314120);
    p2 = func_023920(obj[5], -1);
    p3 = func_023968(obj[5], -1);
    D_001EE3A8[0] = 0;
    D_001DDDAC[0x71A] = D_001DDDAC[0x71A] - D_001ED290;
    saved = D_00314120[3];
    D_001ED299 = 1;
    if (func_0CC790(obj) != 0) {
        func_0235A0(0, func_0B8FE0() != 0x12);
        func_0CDAE8();
    } else if (func_0CC750(obj) != 0) {
        p2[16] = p2[16] + D_001ED294;
        func_0B0F50(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0CDAE8();
    } else if (func_0CC770(obj) != 0) {
        func_024550(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_0238C0(obj[5], -1) == 0) {
            D_001E6808 = obj[5];
        }
        func_0CDAE8();
    } else {
        func_024418(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_14F398();
        }
        if (func_0238C0(obj[5], -1) == 0 && obj[5] != 7) {
            D_001E6808 = obj[5];
        }
        func_0CDAE8();
    }
    func_0D60A8(D_00314120, saved);
}
