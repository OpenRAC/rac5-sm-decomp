/* LEVEL_06:0x0C9F40 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_00319720[];
extern int *D_001E2EAC;
extern int D_001F34A8[1];
extern int D_001F2390;
extern char D_001F2399;
extern int D_001F2394;
extern int D_001EB908;

extern int *func_0D2CF8(int *a);
extern unsigned int *func_022D30(int id, int v);
extern unsigned int *func_022D78(int id, int v);
extern int func_0C9DE0(int *obj);
extern int func_0C9DA0(int *obj);
extern int func_0C9DC0(int *obj);
extern int func_0B6630(void);
extern void func_0229B0(int a, int b);
extern void func_0CB138(void);
extern int func_0AE4E0(int v);
extern int func_023960(int a, int b, int c, int d);
extern int func_022CD0(int a, int b);
extern void func_023828(int a, int b, int c, int d);
extern void func_14CAB0(void);
extern int func_0D36F8(int *a, int b);

void func_0C9F40(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0D2CF8(D_00319720);
    p2 = func_022D30(obj[5], -1);
    p3 = func_022D78(obj[5], -1);
    D_001F34A8[0] = 0;
    D_001E2EAC[0x71A] = D_001E2EAC[0x71A] - D_001F2390;
    saved = D_00319720[3];
    D_001F2399 = 1;
    if (func_0C9DE0(obj) != 0) {
        func_0229B0(0, func_0B6630() != 0x12);
        func_0CB138();
    } else if (func_0C9DA0(obj) != 0) {
        p2[16] = p2[16] + D_001F2394;
        func_0AE4E0(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0CB138();
    } else if (func_0C9DC0(obj) != 0) {
        func_023960(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_022CD0(obj[5], -1) == 0) {
            D_001EB908 = obj[5];
        }
        func_0CB138();
    } else {
        func_023828(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_14CAB0();
        }
        if (func_022CD0(obj[5], -1) == 0 && obj[5] != 7) {
            D_001EB908 = obj[5];
        }
        func_0CB138();
    }
    func_0D36F8(D_00319720, saved);
}
