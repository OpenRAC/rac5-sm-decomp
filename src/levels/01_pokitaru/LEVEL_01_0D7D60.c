/* LEVEL_01:0x0D7D60 -- steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_002067E0;
extern int D_002067E4;
extern char D_001FCA30[];
extern int D_0020671C;
extern int D_00206720;
extern int D_00206738;
extern int D_0020673C;
extern int D_00206730;
extern int D_00206734;
extern int D_00206740;
extern unsigned D_0020674C;
extern Step D_00206750[];
extern int D_00206724;
extern int D_00206728;
extern Obj D_0032D178;

extern int func_1324B0(int id);
extern void func_0B2BE8(void *p, int a, int b);
extern void func_0D7B00(int a, int b);
extern int func_0B6020(int n);
extern void func_0AB500(Obj *o);
extern void func_0AE708(int p, int *buf, float f);
extern int func_0A8680(int *buf);
extern int func_0A86B0(int *buf);
extern int func_0A86E0(int *buf);
extern int func_0A8798(int *buf);
extern void func_0AB3E0(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0D7CF8(int n);

void func_0D7D60(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_002067E0 != id) {
        D_002067E4 = func_1324B0(id);
        D_002067E0 = id;
    }
    func_0B2BE8(D_001FCA30, 3, 1);
    sb = D_00206720;
    sa = D_0020671C;
    func_0D7B00(a, b);
    D_0020671C = sa;
    D_00206720 = sb;
    if (D_00206738 != 0) {
        if (D_0020673C == D_002067E4)
            goto fin;
    } else {
        func_0B6020(6);
    }
    D_00206738 = 1;
    D_00206734 = D_00206730;
    done = 0;
    D_0020673C = D_002067E4;
    D_00206740 = func_1324B0(c);
    D_0032D178.i14 = D_0020673C;
    do {
        D_0032D178.fl20 |= 0x20;
        func_0AB500(&D_0032D178);
        D_0032D178.fl20 &= ~0x20;
        if (D_0032D178.s26 >= D_0032D178.i0C) {
            D_0020674C = D_0020674C + 1;
            func_0AE708(D_00206750[D_0020674C].p4, rect, 0.0f);
            D_00206724 = a - func_0A8680(rect);
            D_00206728 = b - func_0A86B0(rect);
            rect[0] = rect[0] + D_00206724;
            rect[2] = rect[2] + D_00206724;
            rect[1] = rect[1] + D_00206728;
            rect[3] = rect[3] + D_00206728;
            func_0AB3E0(&D_0032D178, (short)func_0A8680(rect), (short)func_0A86B0(rect), (short)func_0A86E0(rect), (short)func_0A8798(rect), 0x40602020);
            D_0032D178.i14 = D_0020673C;
        } else {
            done = 1;
        }
    } while (!done && D_0020674C < 6);
    func_0B6020(6);
fin:
    D_0032D178.i14 = D_0020673C;
    func_0D7CF8(5);
}
