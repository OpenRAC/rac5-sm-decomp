/* LEVEL_04:0x0DD620 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_0021FCA0;
extern int D_0021FCA4;
extern char D_00215EF0[];
extern int D_0021FBDC;
extern int D_0021FBE0;
extern int D_0021FBF8;
extern int D_0021FBFC;
extern int D_0021FBF0;
extern int D_0021FBF4;
extern int D_0021FC00;
extern unsigned D_0021FC0C;
extern Step D_0021FC10[];
extern int D_0021FBE4;
extern int D_0021FBE8;
extern Obj D_00347978;

extern int func_13E930(int id);
extern void func_0B8198(void *p, int a, int b);
extern void func_0DD3C0(int a, int b);
extern int func_0BB828(int n);
extern void func_0B0750(Obj *o);
extern void func_0B3958(int p, int *buf, float f);
extern int func_0AD890(int *buf);
extern int func_0AD8C0(int *buf);
extern int func_0AD8F0(int *buf);
extern int func_0AD9A8(int *buf);
extern void func_0B0630(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0DD5B8(int n);

void func_0DD620(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_0021FCA0 != id) {
        D_0021FCA4 = func_13E930(id);
        D_0021FCA0 = id;
    }
    func_0B8198(D_00215EF0, 3, 1);
    sb = D_0021FBE0;
    sa = D_0021FBDC;
    func_0DD3C0(a, b);
    D_0021FBDC = sa;
    D_0021FBE0 = sb;
    if (D_0021FBF8 != 0) {
        if (D_0021FBFC == D_0021FCA4)
            goto fin;
    } else {
        func_0BB828(6);
    }
    D_0021FBF8 = 1;
    D_0021FBF4 = D_0021FBF0;
    done = 0;
    D_0021FBFC = D_0021FCA4;
    D_0021FC00 = func_13E930(c);
    D_00347978.i14 = D_0021FBFC;
    do {
        D_00347978.fl20 |= 0x20;
        func_0B0750(&D_00347978);
        D_00347978.fl20 &= ~0x20;
        if (D_00347978.s26 >= D_00347978.i0C) {
            D_0021FC0C = D_0021FC0C + 1;
            func_0B3958(D_0021FC10[D_0021FC0C].p4, rect, 0.0f);
            D_0021FBE4 = a - func_0AD890(rect);
            D_0021FBE8 = b - func_0AD8C0(rect);
            rect[0] = rect[0] + D_0021FBE4;
            rect[2] = rect[2] + D_0021FBE4;
            rect[1] = rect[1] + D_0021FBE8;
            rect[3] = rect[3] + D_0021FBE8;
            func_0B0630(&D_00347978, (short)func_0AD890(rect), (short)func_0AD8C0(rect), (short)func_0AD8F0(rect), (short)func_0AD9A8(rect), 0x40602020);
            D_00347978.i14 = D_0021FBFC;
        } else {
            done = 1;
        }
    } while (!done && D_0021FC0C < 6);
    func_0BB828(6);
fin:
    D_00347978.i14 = D_0021FBFC;
    func_0DD5B8(5);
}
