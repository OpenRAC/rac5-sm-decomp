/* LEVEL_10:0x0D0A80 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_00335DA0[];
extern int *D_001FCFAC;
extern int D_0020D5A8[1];
extern int D_0020C490;
extern char D_0020C499;
extern int D_0020C494;
extern int D_00205A08;

extern int *func_0D9838(int *a);
extern unsigned int *func_023F90(int id, int v);
extern unsigned int *func_023FD8(int id, int v);
extern int func_0D0920(int *obj);
extern int func_0D08E0(int *obj);
extern int func_0D0900(int *obj);
extern int func_0BD078(void);
extern void func_023C10(int a, int b);
extern void func_0D1C78(void);
extern int func_0B4E78(int v);
extern int func_024BC0(int a, int b, int c, int d);
extern int func_023F30(int a, int b);
extern void func_024A88(int a, int b, int c, int d);
extern void func_154F00(void);
extern int func_0DA238(int *a, int b);

void func_0D0A80(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0D9838(D_00335DA0);
    p2 = func_023F90(obj[5], -1);
    p3 = func_023FD8(obj[5], -1);
    D_0020D5A8[0] = 0;
    D_001FCFAC[0x71A] = D_001FCFAC[0x71A] - D_0020C490;
    saved = D_00335DA0[3];
    D_0020C499 = 1;
    if (func_0D0920(obj) != 0) {
        func_023C10(0, func_0BD078() != 0x12);
        func_0D1C78();
    } else if (func_0D08E0(obj) != 0) {
        p2[16] = p2[16] + D_0020C494;
        func_0B4E78(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0D1C78();
    } else if (func_0D0900(obj) != 0) {
        func_024BC0(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_023F30(obj[5], -1) == 0) {
            D_00205A08 = obj[5];
        }
        func_0D1C78();
    } else {
        func_024A88(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_154F00();
        }
        if (func_023F30(obj[5], -1) == 0 && obj[5] != 7) {
            D_00205A08 = obj[5];
        }
        func_0D1C78();
    }
    func_0DA238(D_00335DA0, saved);
}
