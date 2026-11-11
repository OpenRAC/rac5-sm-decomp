/* LEVEL_18:0x0C6430 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_001B5B10;
extern int D_001B5B14;
extern char D_001ABF30[];
extern int D_001B5A4C;
extern int D_001B5A50;
extern int D_001B5A68;
extern int D_001B5A6C;
extern int D_001B5A60;
extern int D_001B5A64;
extern int D_001B5A70;
extern unsigned D_001B5A7C;
extern Step D_001B5A80[];
extern int D_001B5A54;
extern int D_001B5A58;
extern Obj D_0027B578;

extern int func_10DFE0(int id);
extern void func_0A0560(void *p, int a, int b);
extern void func_0C61D0(int a, int b);
extern int func_0A40A8(int n);
extern void func_098C00(Obj *o);
extern void func_09BE08(int p, int *buf, float f);
extern int func_095D20(int *buf);
extern int func_095D50(int *buf);
extern int func_095D80(int *buf);
extern int func_095E38(int *buf);
extern void func_098AE0(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0C63C8(int n);

void func_0C6430(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_001B5B10 != id) {
        D_001B5B14 = func_10DFE0(id);
        D_001B5B10 = id;
    }
    func_0A0560(D_001ABF30, 3, 1);
    sb = D_001B5A50;
    sa = D_001B5A4C;
    func_0C61D0(a, b);
    D_001B5A4C = sa;
    D_001B5A50 = sb;
    if (D_001B5A68 != 0) {
        if (D_001B5A6C == D_001B5B14)
            goto fin;
    } else {
        func_0A40A8(6);
    }
    D_001B5A68 = 1;
    D_001B5A64 = D_001B5A60;
    done = 0;
    D_001B5A6C = D_001B5B14;
    D_001B5A70 = func_10DFE0(c);
    D_0027B578.i14 = D_001B5A6C;
    do {
        D_0027B578.fl20 |= 0x20;
        func_098C00(&D_0027B578);
        D_0027B578.fl20 &= ~0x20;
        if (D_0027B578.s26 >= D_0027B578.i0C) {
            D_001B5A7C = D_001B5A7C + 1;
            func_09BE08(D_001B5A80[D_001B5A7C].p4, rect, 0.0f);
            D_001B5A54 = a - func_095D20(rect);
            D_001B5A58 = b - func_095D50(rect);
            rect[0] = rect[0] + D_001B5A54;
            rect[2] = rect[2] + D_001B5A54;
            rect[1] = rect[1] + D_001B5A58;
            rect[3] = rect[3] + D_001B5A58;
            func_098AE0(&D_0027B578, (short)func_095D20(rect), (short)func_095D50(rect), (short)func_095D80(rect), (short)func_095E38(rect), 0x40602020);
            D_0027B578.i14 = D_001B5A6C;
        } else {
            done = 1;
        }
    } while (!done && D_001B5A7C < 6);
    func_0A40A8(6);
fin:
    D_0027B578.i14 = D_001B5A6C;
    func_0C63C8(5);
}
