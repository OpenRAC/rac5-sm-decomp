/* LEVEL_02:0x0DE6F0 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_0021B7A0;
extern int D_0021B7A4;
extern char D_002119F0[];
extern int D_0021B6DC;
extern int D_0021B6E0;
extern int D_0021B6F8;
extern int D_0021B6FC;
extern int D_0021B6F0;
extern int D_0021B6F4;
extern int D_0021B700;
extern unsigned D_0021B70C;
extern Step D_0021B710[];
extern int D_0021B6E4;
extern int D_0021B6E8;
extern Obj D_00344678;

extern int func_138860(int id);
extern void func_0B94F8(void *p, int a, int b);
extern void func_0DE490(int a, int b);
extern int func_0BC930(int n);
extern void func_0B1E10(Obj *o);
extern void func_0B5018(int p, int *buf, float f);
extern int func_0AEF90(int *buf);
extern int func_0AEFC0(int *buf);
extern int func_0AEFF0(int *buf);
extern int func_0AF0A8(int *buf);
extern void func_0B1CF0(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0DE688(int n);

void func_0DE6F0(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_0021B7A0 != id) {
        D_0021B7A4 = func_138860(id);
        D_0021B7A0 = id;
    }
    func_0B94F8(D_002119F0, 3, 1);
    sb = D_0021B6E0;
    sa = D_0021B6DC;
    func_0DE490(a, b);
    D_0021B6DC = sa;
    D_0021B6E0 = sb;
    if (D_0021B6F8 != 0) {
        if (D_0021B6FC == D_0021B7A4)
            goto fin;
    } else {
        func_0BC930(6);
    }
    D_0021B6F8 = 1;
    D_0021B6F4 = D_0021B6F0;
    done = 0;
    D_0021B6FC = D_0021B7A4;
    D_0021B700 = func_138860(c);
    D_00344678.i14 = D_0021B6FC;
    do {
        D_00344678.fl20 |= 0x20;
        func_0B1E10(&D_00344678);
        D_00344678.fl20 &= ~0x20;
        if (D_00344678.s26 >= D_00344678.i0C) {
            D_0021B70C = D_0021B70C + 1;
            func_0B5018(D_0021B710[D_0021B70C].p4, rect, 0.0f);
            D_0021B6E4 = a - func_0AEF90(rect);
            D_0021B6E8 = b - func_0AEFC0(rect);
            rect[0] = rect[0] + D_0021B6E4;
            rect[2] = rect[2] + D_0021B6E4;
            rect[1] = rect[1] + D_0021B6E8;
            rect[3] = rect[3] + D_0021B6E8;
            func_0B1CF0(&D_00344678, (short)func_0AEF90(rect), (short)func_0AEFC0(rect), (short)func_0AEFF0(rect), (short)func_0AF0A8(rect), 0x40602020);
            D_00344678.i14 = D_0021B6FC;
        } else {
            done = 1;
        }
    } while (!done && D_0021B70C < 6);
    func_0BC930(6);
fin:
    D_00344678.i14 = D_0021B6FC;
    func_0DE688(5);
}
