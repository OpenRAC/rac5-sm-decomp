/* LEVEL_23:0x0C6470 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_002FDDE0[];
extern int *D_001C73AC;
extern int D_001D79A8[1];
extern int D_001D6890;
extern char D_001D6899;
extern int D_001D6894;
extern int D_001CFE08;

extern int *func_0CF228(int *a);
extern unsigned int *func_0226C8(int id, int v);
extern unsigned int *func_022710(int id, int v);
extern int func_0C6310(int *obj);
extern int func_0C62D0(int *obj);
extern int func_0C62F0(int *obj);
extern int func_0B2AC8(void);
extern void func_022348(int a, int b);
extern void func_0C7668(void);
extern int func_0AAA80(int v);
extern int func_0232A0(int a, int b, int c, int d);
extern int func_022668(int a, int b);
extern void func_023168(int a, int b, int c, int d);
extern void func_154BD0(void);
extern int func_0CFC28(int *a, int b);

void func_0C6470(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0CF228(D_002FDDE0);
    p2 = func_0226C8(obj[5], -1);
    p3 = func_022710(obj[5], -1);
    D_001D79A8[0] = 0;
    D_001C73AC[0x71A] = D_001C73AC[0x71A] - D_001D6890;
    saved = D_002FDDE0[3];
    D_001D6899 = 1;
    if (func_0C6310(obj) != 0) {
        func_022348(0, func_0B2AC8() != 0x12);
        func_0C7668();
    } else if (func_0C62D0(obj) != 0) {
        p2[16] = p2[16] + D_001D6894;
        func_0AAA80(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0C7668();
    } else if (func_0C62F0(obj) != 0) {
        func_0232A0(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_022668(obj[5], -1) == 0) {
            D_001CFE08 = obj[5];
        }
        func_0C7668();
    } else {
        func_023168(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_154BD0();
        }
        if (func_022668(obj[5], -1) == 0 && obj[5] != 7) {
            D_001CFE08 = obj[5];
        }
        func_0C7668();
    }
    func_0CFC28(D_002FDDE0, saved);
}
