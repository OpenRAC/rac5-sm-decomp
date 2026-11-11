/* LEVEL_03:0x0CF428 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_00347820[];
extern int *D_0020C62C;
extern int D_0021CC28[1];
extern int D_0021BB10;
extern char D_0021BB19;
extern int D_0021BB14;
extern int D_00215088;

extern int *func_0D81E0(int *a);
extern unsigned int *func_0244F8(int id, int v);
extern unsigned int *func_024540(int id, int v);
extern int func_0CF2C8(int *obj);
extern int func_0CF288(int *obj);
extern int func_0CF2A8(int *obj);
extern int func_0BBB18(void);
extern void func_024178(int a, int b);
extern void func_0D0620(void);
extern int func_0B3A88(int v);
extern int func_025128(int a, int b, int c, int d);
extern int func_024498(int a, int b);
extern void func_024FF0(int a, int b, int c, int d);
extern void func_1562B0(void);
extern int func_0D8BE0(int *a, int b);

void func_0CF428(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0D81E0(D_00347820);
    p2 = func_0244F8(obj[5], -1);
    p3 = func_024540(obj[5], -1);
    D_0021CC28[0] = 0;
    D_0020C62C[0x71A] = D_0020C62C[0x71A] - D_0021BB10;
    saved = D_00347820[3];
    D_0021BB19 = 1;
    if (func_0CF2C8(obj) != 0) {
        func_024178(0, func_0BBB18() != 0x12);
        func_0D0620();
    } else if (func_0CF288(obj) != 0) {
        p2[16] = p2[16] + D_0021BB14;
        func_0B3A88(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0D0620();
    } else if (func_0CF2A8(obj) != 0) {
        func_025128(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_024498(obj[5], -1) == 0) {
            D_00215088 = obj[5];
        }
        func_0D0620();
    } else {
        func_024FF0(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_1562B0();
        }
        if (func_024498(obj[5], -1) == 0 && obj[5] != 7) {
            D_00215088 = obj[5];
        }
        func_0D0620();
    }
    func_0D8BE0(D_00347820, saved);
}
