/* LEVEL_04:0x0D4ED8 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_003471A0[];
extern int *D_0020D12C;
extern int D_0021DA68[1];
extern int D_0021C950;
extern char D_0021C959;
extern int D_0021C954;
extern int D_00215EC8;

extern int *func_0DDCB8(int *a);
extern unsigned int *func_0242A8(int id, int v);
extern unsigned int *func_0242F0(int id, int v);
extern int func_0D4D78(int *obj);
extern int func_0D4D38(int *obj);
extern int func_0D4D58(int *obj);
extern int func_0C1540(void);
extern void func_023F28(int a, int b);
extern void func_0D60D0(void);
extern int func_0B9390(int v);
extern int func_024ED8(int a, int b, int c, int d);
extern int func_024248(int a, int b);
extern void func_024DA0(int a, int b, int c, int d);
extern void func_163F60(void);
extern int func_0DE6B8(int *a, int b);

void func_0D4ED8(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0DDCB8(D_003471A0);
    p2 = func_0242A8(obj[5], -1);
    p3 = func_0242F0(obj[5], -1);
    D_0021DA68[0] = 0;
    D_0020D12C[0x71A] = D_0020D12C[0x71A] - D_0021C950;
    saved = D_003471A0[3];
    D_0021C959 = 1;
    if (func_0D4D78(obj) != 0) {
        func_023F28(0, func_0C1540() != 0x12);
        func_0D60D0();
    } else if (func_0D4D38(obj) != 0) {
        p2[16] = p2[16] + D_0021C954;
        func_0B9390(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0D60D0();
    } else if (func_0D4D58(obj) != 0) {
        func_024ED8(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_024248(obj[5], -1) == 0) {
            D_00215EC8 = obj[5];
        }
        func_0D60D0();
    } else {
        func_024DA0(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_163F60();
        }
        if (func_024248(obj[5], -1) == 0 && obj[5] != 7) {
            D_00215EC8 = obj[5];
        }
        func_0D60D0();
    }
    func_0DE6B8(D_003471A0, saved);
}
