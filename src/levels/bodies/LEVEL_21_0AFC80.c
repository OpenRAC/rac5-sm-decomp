/* LEVEL_21:0x0AFC80 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_002441E0[];
extern int *D_00148C2C;
extern int D_00159228[1];
extern int D_00158110;
extern char D_00158119;
extern int D_00158114;
extern int D_00151688;

extern int *func_0B8A38(int *a);
extern unsigned int *func_01E990(int id, int v);
extern unsigned int *func_01E9D8(int id, int v);
extern int func_0AFB20(int *obj);
extern int func_0AFAE0(int *obj);
extern int func_0AFB00(int *obj);
extern int func_09C378(void);
extern void func_01E610(int a, int b);
extern void func_0B0E78(void);
extern int func_0942E0(int v);
extern int func_01F568(int a, int b, int c, int d);
extern int func_01E930(int a, int b);
extern void func_01F430(int a, int b, int c, int d);
extern void func_0F4D00(void);
extern int func_0B9438(int *a, int b);

void func_0AFC80(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0B8A38(D_002441E0);
    p2 = func_01E990(obj[5], -1);
    p3 = func_01E9D8(obj[5], -1);
    D_00159228[0] = 0;
    D_00148C2C[0x71A] = D_00148C2C[0x71A] - D_00158110;
    saved = D_002441E0[3];
    D_00158119 = 1;
    if (func_0AFB20(obj) != 0) {
        func_01E610(0, func_09C378() != 0x12);
        func_0B0E78();
    } else if (func_0AFAE0(obj) != 0) {
        p2[16] = p2[16] + D_00158114;
        func_0942E0(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0B0E78();
    } else if (func_0AFB00(obj) != 0) {
        func_01F568(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_01E930(obj[5], -1) == 0) {
            D_00151688 = obj[5];
        }
        func_0B0E78();
    } else {
        func_01F430(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_0F4D00();
        }
        if (func_01E930(obj[5], -1) == 0 && obj[5] != 7) {
            D_00151688 = obj[5];
        }
        func_0B0E78();
    }
    func_0B9438(D_002441E0, saved);
}
