/* LEVEL_07:0x0D16A0 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_003422A0[];
extern int *D_002082AC;
extern int D_002188A8[1];
extern int D_00217790;
extern char D_00217799;
extern int D_00217794;
extern int D_00210D08;

extern int *func_0DA458(int *a);
extern unsigned int *func_024BF0(int id, int v);
extern unsigned int *func_024C38(int id, int v);
extern int func_0D1540(int *obj);
extern int func_0D1500(int *obj);
extern int func_0D1520(int *obj);
extern int func_0BDD90(void);
extern void func_024870(int a, int b);
extern void func_0D2898(void);
extern int func_0B5D00(int v);
extern int func_025820(int a, int b, int c, int d);
extern int func_024B90(int a, int b);
extern void func_0256E8(int a, int b, int c, int d);
extern void func_15A160(void);
extern int func_0DAE58(int *a, int b);

void func_0D16A0(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0DA458(D_003422A0);
    p2 = func_024BF0(obj[5], -1);
    p3 = func_024C38(obj[5], -1);
    D_002188A8[0] = 0;
    D_002082AC[0x71A] = D_002082AC[0x71A] - D_00217790;
    saved = D_003422A0[3];
    D_00217799 = 1;
    if (func_0D1540(obj) != 0) {
        func_024870(0, func_0BDD90() != 0x12);
        func_0D2898();
    } else if (func_0D1500(obj) != 0) {
        p2[16] = p2[16] + D_00217794;
        func_0B5D00(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0D2898();
    } else if (func_0D1520(obj) != 0) {
        func_025820(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_024B90(obj[5], -1) == 0) {
            D_00210D08 = obj[5];
        }
        func_0D2898();
    } else {
        func_0256E8(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_15A160();
        }
        if (func_024B90(obj[5], -1) == 0 && obj[5] != 7) {
            D_00210D08 = obj[5];
        }
        func_0D2898();
    }
    func_0DAE58(D_003422A0, saved);
}
