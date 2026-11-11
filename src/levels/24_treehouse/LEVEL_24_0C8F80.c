/* LEVEL_24:0x0C8F80 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_002F8860[];
extern int *D_001C4C2C;
extern int D_001D5228[1];
extern int D_001D4110;
extern char D_001D4119;
extern int D_001D4114;
extern int D_001CD688;

extern int *func_0D1D60(int *a);
extern unsigned int *func_022400(int id, int v);
extern unsigned int *func_022448(int id, int v);
extern int func_0C8E20(int *obj);
extern int func_0C8DE0(int *obj);
extern int func_0C8E00(int *obj);
extern int func_0B55F0(void);
extern void func_022080(int a, int b);
extern void func_0CA178(void);
extern int func_0AD518(int v);
extern int func_022FD8(int a, int b, int c, int d);
extern int func_0223A0(int a, int b);
extern void func_022EA0(int a, int b, int c, int d);
extern void func_14C908(void);
extern int func_0D2760(int *a, int b);

void func_0C8F80(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0D1D60(D_002F8860);
    p2 = func_022400(obj[5], -1);
    p3 = func_022448(obj[5], -1);
    D_001D5228[0] = 0;
    D_001C4C2C[0x71A] = D_001C4C2C[0x71A] - D_001D4110;
    saved = D_002F8860[3];
    D_001D4119 = 1;
    if (func_0C8E20(obj) != 0) {
        func_022080(0, func_0B55F0() != 0x12);
        func_0CA178();
    } else if (func_0C8DE0(obj) != 0) {
        p2[16] = p2[16] + D_001D4114;
        func_0AD518(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0CA178();
    } else if (func_0C8E00(obj) != 0) {
        func_022FD8(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_0223A0(obj[5], -1) == 0) {
            D_001CD688 = obj[5];
        }
        func_0CA178();
    } else {
        func_022EA0(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_14C908();
        }
        if (func_0223A0(obj[5], -1) == 0 && obj[5] != 7) {
            D_001CD688 = obj[5];
        }
        func_0CA178();
    }
    func_0D2760(D_002F8860, saved);
}
