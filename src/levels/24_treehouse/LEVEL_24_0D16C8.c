/* LEVEL_24:0x0D16C8 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_001D7460;
extern int D_001D7464;
extern char D_001CD6B0[];
extern int D_001D739C;
extern int D_001D73A0;
extern int D_001D73B8;
extern int D_001D73BC;
extern int D_001D73B0;
extern int D_001D73B4;
extern int D_001D73C0;
extern unsigned D_001D73CC;
extern Step D_001D73D0[];
extern int D_001D73A4;
extern int D_001D73A8;
extern Obj D_002F9038;

extern int func_127FB0(int id);
extern void func_0AC460(void *p, int a, int b);
extern void func_0D1468(int a, int b);
extern int func_0AF8B0(int n);
extern void func_0A4D78(Obj *o);
extern void func_0A7F80(int p, int *buf, float f);
extern int func_0A1EF8(int *buf);
extern int func_0A1F28(int *buf);
extern int func_0A1F58(int *buf);
extern int func_0A2010(int *buf);
extern void func_0A4C58(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0D1660(int n);

void func_0D16C8(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_001D7460 != id) {
        D_001D7464 = func_127FB0(id);
        D_001D7460 = id;
    }
    func_0AC460(D_001CD6B0, 3, 1);
    sb = D_001D73A0;
    sa = D_001D739C;
    func_0D1468(a, b);
    D_001D739C = sa;
    D_001D73A0 = sb;
    if (D_001D73B8 != 0) {
        if (D_001D73BC == D_001D7464)
            goto fin;
    } else {
        func_0AF8B0(6);
    }
    D_001D73B8 = 1;
    D_001D73B4 = D_001D73B0;
    done = 0;
    D_001D73BC = D_001D7464;
    D_001D73C0 = func_127FB0(c);
    D_002F9038.i14 = D_001D73BC;
    do {
        D_002F9038.fl20 |= 0x20;
        func_0A4D78(&D_002F9038);
        D_002F9038.fl20 &= ~0x20;
        if (D_002F9038.s26 >= D_002F9038.i0C) {
            D_001D73CC = D_001D73CC + 1;
            func_0A7F80(D_001D73D0[D_001D73CC].p4, rect, 0.0f);
            D_001D73A4 = a - func_0A1EF8(rect);
            D_001D73A8 = b - func_0A1F28(rect);
            rect[0] = rect[0] + D_001D73A4;
            rect[2] = rect[2] + D_001D73A4;
            rect[1] = rect[1] + D_001D73A8;
            rect[3] = rect[3] + D_001D73A8;
            func_0A4C58(&D_002F9038, (short)func_0A1EF8(rect), (short)func_0A1F28(rect), (short)func_0A1F58(rect), (short)func_0A2010(rect), 0x40602020);
            D_002F9038.i14 = D_001D73BC;
        } else {
            done = 1;
        }
    } while (!done && D_001D73CC < 6);
    func_0AF8B0(6);
fin:
    D_002F9038.i14 = D_001D73BC;
    func_0D1660(5);
}
