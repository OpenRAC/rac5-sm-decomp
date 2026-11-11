/* LEVEL_19:0x0BE610 -- placement copy of LEVEL_01_0CF640.c: applies the result of a four-way action test: updates the stat counter or the current id, then runs the shared cleanup and hands the saved word back. */
extern int D_0027ABA0[];
extern int *D_001A2C34;
extern int D_001B35D8[1];
extern int D_001B24C0;
extern char D_001B24C9;
extern int D_001B24C4;
extern int D_001ABC08;

extern int *func_0C73C8(int *a);
extern unsigned int *func_021D08(int id, int v);
extern unsigned int *func_021D50(int id, int v);
extern int func_0BE4B0(int *obj);
extern int func_0BE470(int *obj);
extern int func_0BE490(int *obj);
extern int func_0AA6F8(void);
extern void func_021840(int a, int b);
extern void func_0BF808(void);
extern int func_0A1C98(int v);
extern int func_0227E8(int a, int b, int c, int d);
extern int func_021CB0(int a, int b);
extern void func_022708(int a, int b, int c, int d);
extern void func_126208(void);
extern int func_0C7DC8(int *a, int b);

void func_0BE610(void)
{
    int *obj;
    unsigned int *p2;
    unsigned int *p3;
    int saved;

    obj = func_0C73C8(D_0027ABA0);
    p2 = func_021D08(obj[5], -1);
    p3 = func_021D50(obj[5], -1);
    D_001B35D8[0] = 0;
    D_001A2C34[0x71A] = D_001A2C34[0x71A] - D_001B24C0;
    saved = D_0027ABA0[3];
    D_001B24C9 = 1;
    if (func_0BE4B0(obj) != 0) {
        func_021840(0, func_0AA6F8() != 0x12);
        func_0BF808();
    } else if (func_0BE470(obj) != 0) {
        p2[16] = p2[16] + D_001B24C4;
        func_0A1C98(-0x3C);
        if (p3[14] < p2[16]) {
            p2[16] = p3[14];
        }
        func_0BF808();
    } else if (func_0BE490(obj) != 0) {
        func_0227E8(obj[5], p2[15] + 1, -1, obj[5] != 0xC);
        if (func_021CB0(obj[5], -1) == 0) {
            D_001ABC08 = obj[5];
        }
        func_0BF808();
    } else {
        func_022708(obj[5], 1, -1, 1);
        if (obj[5] == 0x18) {
            func_126208();
        }
        if (func_021CB0(obj[5], -1) == 0 && obj[5] != 7) {
            D_001ABC08 = obj[5];
        }
        func_0BF808();
    }
    func_0C7DC8(D_0027ABA0, saved);
}
