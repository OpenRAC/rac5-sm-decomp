/* LEVEL_16:0x0C7458 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
typedef struct {
    int a;
    int p4;
    char pad8[0x10];
} Step;

typedef struct {
    char pad0[0xC];
    int i0C;
    char pad10[4];
    int i14;
    char pad18[8];
    unsigned fl20;
    char pad24[2];
    short s26;
} Obj;

extern int D_001B4690;
extern int D_001B4694;
extern char D_001AAAB0[];
extern int D_001B45CC;
extern int D_001B45D0;
extern int D_001B45E8;
extern int D_001B45EC;
extern int D_001B45E0;
extern int D_001B45E4;
extern int D_001B45F0;
extern unsigned D_001B45FC;
extern Step D_001B4600[];
extern int D_001B45D4;
extern int D_001B45D8;
extern Obj D_0027B1F8;

extern int func_10F330(int id);
extern void func_0A1550(void *p, int a, int b);
extern void func_0C71F8(int a, int b);
extern int func_0A50B0(int n);
extern void func_099BF0(Obj *o);
extern void func_09CDF8(int p, int *buf, float f);
extern int func_096D10(int *buf);
extern int func_096D40(int *buf);
extern int func_096D70(int *buf);
extern int func_096E28(int *buf);
extern void func_099AD0(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0C73F0(int n);

void func_0C7458(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_001B4690 != id) {
        D_001B4694 = func_10F330(id);
        D_001B4690 = id;
    }
    func_0A1550(D_001AAAB0, 3, 1);
    sb = D_001B45D0;
    sa = D_001B45CC;
    func_0C71F8(a, b);
    D_001B45CC = sa;
    D_001B45D0 = sb;
    if (D_001B45E8 != 0) {
        if (D_001B45EC == D_001B4694)
            goto fin;
    } else {
        func_0A50B0(6);
    }
    D_001B45E8 = 1;
    D_001B45E4 = D_001B45E0;
    done = 0;
    D_001B45EC = D_001B4694;
    D_001B45F0 = func_10F330(c);
    D_0027B1F8.i14 = D_001B45EC;
    do {
        D_0027B1F8.fl20 |= 0x20;
        func_099BF0(&D_0027B1F8);
        D_0027B1F8.fl20 &= ~0x20;
        if (D_0027B1F8.s26 >= D_0027B1F8.i0C) {
            D_001B45FC = D_001B45FC + 1;
            func_09CDF8(D_001B4600[D_001B45FC].p4, rect, 0.0f);
            D_001B45D4 = a - func_096D10(rect);
            D_001B45D8 = b - func_096D40(rect);
            rect[0] = rect[0] + D_001B45D4;
            rect[2] = rect[2] + D_001B45D4;
            rect[1] = rect[1] + D_001B45D8;
            rect[3] = rect[3] + D_001B45D8;
            func_099AD0(&D_0027B1F8, (short)func_096D10(rect), (short)func_096D40(rect), (short)func_096D70(rect), (short)func_096E28(rect), 0x40602020);
            D_0027B1F8.i14 = D_001B45EC;
        } else {
            done = 1;
        }
    } while (!done && D_001B45FC < 6);
    func_0A50B0(6);
fin:
    D_0027B1F8.i14 = D_001B45EC;
    func_0C73F0(5);
}
