/* LEVEL_10:0x0D91A0 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_0020F7E0;
extern int D_0020F7E4;
extern char D_00205A30[];
extern int D_0020F71C;
extern int D_0020F720;
extern int D_0020F738;
extern int D_0020F73C;
extern int D_0020F730;
extern int D_0020F734;
extern int D_0020F740;
extern unsigned D_0020F74C;
extern Step D_0020F750[];
extern int D_0020F724;
extern int D_0020F728;
extern Obj D_00336578;

extern int func_130310(int id);
extern void func_0B3DC0(void *p, int a, int b);
extern void func_0D8F40(int a, int b);
extern int func_0B71F8(int n);
extern void func_0AC618(Obj *o);
extern void func_0AF820(int p, int *buf, float f);
extern int func_0A9798(int *buf);
extern int func_0A97C8(int *buf);
extern int func_0A97F8(int *buf);
extern int func_0A98B0(int *buf);
extern void func_0AC4F8(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0D9138(int n);

void func_0D91A0(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_0020F7E0 != id) {
        D_0020F7E4 = func_130310(id);
        D_0020F7E0 = id;
    }
    func_0B3DC0(D_00205A30, 3, 1);
    sb = D_0020F720;
    sa = D_0020F71C;
    func_0D8F40(a, b);
    D_0020F71C = sa;
    D_0020F720 = sb;
    if (D_0020F738 != 0) {
        if (D_0020F73C == D_0020F7E4)
            goto fin;
    } else {
        func_0B71F8(6);
    }
    D_0020F738 = 1;
    D_0020F734 = D_0020F730;
    done = 0;
    D_0020F73C = D_0020F7E4;
    D_0020F740 = func_130310(c);
    D_00336578.i14 = D_0020F73C;
    do {
        D_00336578.fl20 |= 0x20;
        func_0AC618(&D_00336578);
        D_00336578.fl20 &= ~0x20;
        if (D_00336578.s26 >= D_00336578.i0C) {
            D_0020F74C = D_0020F74C + 1;
            func_0AF820(D_0020F750[D_0020F74C].p4, rect, 0.0f);
            D_0020F724 = a - func_0A9798(rect);
            D_0020F728 = b - func_0A97C8(rect);
            rect[0] = rect[0] + D_0020F724;
            rect[2] = rect[2] + D_0020F724;
            rect[1] = rect[1] + D_0020F728;
            rect[3] = rect[3] + D_0020F728;
            func_0AC4F8(&D_00336578, (short)func_0A9798(rect), (short)func_0A97C8(rect), (short)func_0A97F8(rect), (short)func_0A98B0(rect), 0x40602020);
            D_00336578.i14 = D_0020F73C;
        } else {
            done = 1;
        }
    } while (!done && D_0020F74C < 6);
    func_0B71F8(6);
fin:
    D_00336578.i14 = D_0020F73C;
    func_0D9138(5);
}
