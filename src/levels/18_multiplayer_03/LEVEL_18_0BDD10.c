/* LEVEL_18:0x0BDD10 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_0027ADA0[];
extern int *D_001A2F34;
extern int D_001B38D8[1];
extern int D_001B27C0;
extern char D_001B27C9;
extern int D_001B27C4;
extern int D_001ABF08;

extern int *func_0C6AC8(int *a);
extern unsigned int *func_021710(int id, int v);
extern unsigned int *func_021758(int id, int v);
extern int func_0BDBB0(int *obj);
extern int func_0BDB70(int *obj);
extern int func_0BDB90(int *obj);
extern int func_0A9DF8(void);
extern void func_021248(int a, int b);
extern void func_0BEF08(void);
extern int func_0A1418(int v);
extern int func_0221F0(int a, int b, int c, int d);
extern int func_0216B8(int a, int b);
extern void func_022110(int a, int b, int c, int d);
extern void func_124950(void);
extern int func_0C74C8(int *a, int b);

void func_0BDD10(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0C6AC8(D_0027ADA0);
    p2 = func_021710(obj[5], -1);
    p3 = func_021758(obj[5], -1);
    D_001B38D8[0] = 0;
    D_001A2F34[0x71A] = D_001A2F34[0x71A] - D_001B27C0;
    saved = D_0027ADA0[3];
    D_001B27C9 = 1;
    if (func_0BDBB0(obj) != 0) {
        func_021248(0, func_0A9DF8() != 0x12);
        func_0BEF08();
    } else if (func_0BDB70(obj) != 0) {
        p2[16] = p2[16] + D_001B27C4;
        func_0A1418(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0BEF08();
    } else if (func_0BDB90(obj) != 0) {
        func_0221F0(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_0216B8(obj[5], -1) == 0) {
            D_001ABF08 = obj[5];
        }
        func_0BEF08();
    } else {
        func_022110(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_124950();
        }
        if (func_0216B8(obj[5], -1) == 0 && obj[5] != 7) {
            D_001ABF08 = obj[5];
        }
        func_0BEF08();
    }
    func_0C74C8(D_0027ADA0, saved);
}
