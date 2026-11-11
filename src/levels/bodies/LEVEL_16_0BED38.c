/* LEVEL_16:0x0BED38 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_0027AA20[];
extern int *D_001A1AB4;
extern int D_001B2458[1];
extern int D_001B1340;
extern char D_001B1349;
extern int D_001B1344;
extern int D_001AAA88;

extern int *func_0C7AF0(int *a);
extern unsigned int *func_0220C8(int id, int v);
extern unsigned int *func_022110(int id, int v);
extern int func_0BEBD8(int *obj);
extern int func_0BEB98(int *obj);
extern int func_0BEBB8(int *obj);
extern int func_0AAE20(void);
extern void func_021C00(int a, int b);
extern void func_0BFF30(void);
extern int func_0A2420(int v);
extern int func_022BA8(int a, int b, int c, int d);
extern int func_022070(int a, int b);
extern void func_022AC8(int a, int b, int c, int d);
extern void func_125898(void);
extern int func_0C84F0(int *a, int b);

void func_0BED38(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0C7AF0(D_0027AA20);
    p2 = func_0220C8(obj[5], -1);
    p3 = func_022110(obj[5], -1);
    D_001B2458[0] = 0;
    D_001A1AB4[0x71A] = D_001A1AB4[0x71A] - D_001B1340;
    saved = D_0027AA20[3];
    D_001B1349 = 1;
    if (func_0BEBD8(obj) != 0) {
        func_021C00(0, func_0AAE20() != 0x12);
        func_0BFF30();
    } else if (func_0BEB98(obj) != 0) {
        p2[16] = p2[16] + D_001B1344;
        func_0A2420(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0BFF30();
    } else if (func_0BEBB8(obj) != 0) {
        func_022BA8(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_022070(obj[5], -1) == 0) {
            D_001AAA88 = obj[5];
        }
        func_0BFF30();
    } else {
        func_022AC8(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_125898();
        }
        if (func_022070(obj[5], -1) == 0 && obj[5] != 7) {
            D_001AAA88 = obj[5];
        }
        func_0BFF30();
    }
    func_0C84F0(D_0027AA20, saved);
}
