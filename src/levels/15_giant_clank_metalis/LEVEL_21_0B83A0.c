/* LEVEL_21:0x0B83A0 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_0015B460;
extern int D_0015B464;
extern char D_001516B0[];
extern int D_0015B39C;
extern int D_0015B3A0;
extern int D_0015B3B8;
extern int D_0015B3BC;
extern int D_0015B3B0;
extern int D_0015B3B4;
extern int D_0015B3C0;
extern unsigned D_0015B3CC;
extern Step D_0015B3D0[];
extern int D_0015B3A4;
extern int D_0015B3A8;
extern Obj D_002449B8;

extern int func_0F1378(int id);
extern void func_0934B0(void *p, int a, int b);
extern void func_0B8140(int a, int b);
extern int func_096530(int n);
extern void func_08BDC8(Obj *o);
extern void func_08EFD0(int p, int *buf, float f);
extern int func_088F48(int *buf);
extern int func_088F78(int *buf);
extern int func_088FA8(int *buf);
extern int func_089060(int *buf);
extern void func_08BCA8(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0B8338(int n);

void func_0B83A0(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_0015B460 != id) {
        D_0015B464 = func_0F1378(id);
        D_0015B460 = id;
    }
    func_0934B0(D_001516B0, 3, 1);
    sb = D_0015B3A0;
    sa = D_0015B39C;
    func_0B8140(a, b);
    D_0015B39C = sa;
    D_0015B3A0 = sb;
    if (D_0015B3B8 != 0) {
        if (D_0015B3BC == D_0015B464)
            goto fin;
    } else {
        func_096530(6);
    }
    D_0015B3B8 = 1;
    D_0015B3B4 = D_0015B3B0;
    done = 0;
    D_0015B3BC = D_0015B464;
    D_0015B3C0 = func_0F1378(c);
    D_002449B8.i14 = D_0015B3BC;
    do {
        D_002449B8.fl20 |= 0x20;
        func_08BDC8(&D_002449B8);
        D_002449B8.fl20 &= ~0x20;
        if (D_002449B8.s26 >= D_002449B8.i0C) {
            D_0015B3CC = D_0015B3CC + 1;
            func_08EFD0(D_0015B3D0[D_0015B3CC].p4, rect, 0.0f);
            D_0015B3A4 = a - func_088F48(rect);
            D_0015B3A8 = b - func_088F78(rect);
            rect[0] = rect[0] + D_0015B3A4;
            rect[2] = rect[2] + D_0015B3A4;
            rect[1] = rect[1] + D_0015B3A8;
            rect[3] = rect[3] + D_0015B3A8;
            func_08BCA8(&D_002449B8, (short)func_088F48(rect), (short)func_088F78(rect), (short)func_088FA8(rect), (short)func_089060(rect), 0x40602020);
            D_002449B8.i14 = D_0015B3BC;
        } else {
            done = 1;
        }
    } while (!done && D_0015B3CC < 6);
    func_096530(6);
fin:
    D_002449B8.i14 = D_0015B3BC;
    func_0B8338(5);
}
