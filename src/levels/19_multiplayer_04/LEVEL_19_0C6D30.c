/* LEVEL_19:0x0C6D30 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_001B5810;
extern int D_001B5814;
extern char D_001ABC30[];
extern int D_001B574C;
extern int D_001B5750;
extern int D_001B5768;
extern int D_001B576C;
extern int D_001B5760;
extern int D_001B5764;
extern int D_001B5770;
extern unsigned D_001B577C;
extern Step D_001B5780[];
extern int D_001B5754;
extern int D_001B5758;
extern Obj D_0027B378;

extern int func_10F9D0(int id);
extern void func_0A0DE0(void *p, int a, int b);
extern void func_0C6AD0(int a, int b);
extern int func_0A4928(int n);
extern void func_099480(Obj *o);
extern void func_09C688(int p, int *buf, float f);
extern int func_0965A0(int *buf);
extern int func_0965D0(int *buf);
extern int func_096600(int *buf);
extern int func_0966B8(int *buf);
extern void func_099360(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0C6CC8(int n);

void func_0C6D30(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_001B5810 != id) {
        D_001B5814 = func_10F9D0(id);
        D_001B5810 = id;
    }
    func_0A0DE0(D_001ABC30, 3, 1);
    sb = D_001B5750;
    sa = D_001B574C;
    func_0C6AD0(a, b);
    D_001B574C = sa;
    D_001B5750 = sb;
    if (D_001B5768 != 0) {
        if (D_001B576C == D_001B5814)
            goto fin;
    } else {
        func_0A4928(6);
    }
    D_001B5768 = 1;
    D_001B5764 = D_001B5760;
    done = 0;
    D_001B576C = D_001B5814;
    D_001B5770 = func_10F9D0(c);
    D_0027B378.i14 = D_001B576C;
    do {
        D_0027B378.fl20 |= 0x20;
        func_099480(&D_0027B378);
        D_0027B378.fl20 &= ~0x20;
        if (D_0027B378.s26 >= D_0027B378.i0C) {
            D_001B577C = D_001B577C + 1;
            func_09C688(D_001B5780[D_001B577C].p4, rect, 0.0f);
            D_001B5754 = a - func_0965A0(rect);
            D_001B5758 = b - func_0965D0(rect);
            rect[0] = rect[0] + D_001B5754;
            rect[2] = rect[2] + D_001B5754;
            rect[1] = rect[1] + D_001B5758;
            rect[3] = rect[3] + D_001B5758;
            func_099360(&D_0027B378, (short)func_0965A0(rect), (short)func_0965D0(rect), (short)func_096600(rect), (short)func_0966B8(rect), 0x40602020);
            D_0027B378.i14 = D_001B576C;
        } else {
            done = 1;
        }
    } while (!done && D_001B577C < 6);
    func_0A4928(6);
fin:
    D_0027B378.i14 = D_001B576C;
    func_0C6CC8(5);
}
