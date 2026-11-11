/* LEVEL_23:0x0CEB90 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_001D9BE0;
extern int D_001D9BE4;
extern char D_001CFE30[];
extern int D_001D9B1C;
extern int D_001D9B20;
extern int D_001D9B38;
extern int D_001D9B3C;
extern int D_001D9B30;
extern int D_001D9B34;
extern int D_001D9B40;
extern unsigned D_001D9B4C;
extern Step D_001D9B50[];
extern int D_001D9B24;
extern int D_001D9B28;
extern Obj D_002FE5B8;

extern int func_123C28(int id);
extern void func_0A99C8(void *p, int a, int b);
extern void func_0CE930(int a, int b);
extern int func_0ACDE8(int n);
extern void func_0A2270(Obj *o);
extern void func_0A5478(int p, int *buf, float f);
extern int func_09F3F0(int *buf);
extern int func_09F420(int *buf);
extern int func_09F450(int *buf);
extern int func_09F508(int *buf);
extern void func_0A2150(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0CEB28(int n);

void func_0CEB90(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_001D9BE0 != id) {
        D_001D9BE4 = func_123C28(id);
        D_001D9BE0 = id;
    }
    func_0A99C8(D_001CFE30, 3, 1);
    sb = D_001D9B20;
    sa = D_001D9B1C;
    func_0CE930(a, b);
    D_001D9B1C = sa;
    D_001D9B20 = sb;
    if (D_001D9B38 != 0) {
        if (D_001D9B3C == D_001D9BE4)
            goto fin;
    } else {
        func_0ACDE8(6);
    }
    D_001D9B38 = 1;
    D_001D9B34 = D_001D9B30;
    done = 0;
    D_001D9B3C = D_001D9BE4;
    D_001D9B40 = func_123C28(c);
    D_002FE5B8.i14 = D_001D9B3C;
    do {
        D_002FE5B8.fl20 |= 0x20;
        func_0A2270(&D_002FE5B8);
        D_002FE5B8.fl20 &= ~0x20;
        if (D_002FE5B8.s26 >= D_002FE5B8.i0C) {
            D_001D9B4C = D_001D9B4C + 1;
            func_0A5478(D_001D9B50[D_001D9B4C].p4, rect, 0.0f);
            D_001D9B24 = a - func_09F3F0(rect);
            D_001D9B28 = b - func_09F420(rect);
            rect[0] = rect[0] + D_001D9B24;
            rect[2] = rect[2] + D_001D9B24;
            rect[1] = rect[1] + D_001D9B28;
            rect[3] = rect[3] + D_001D9B28;
            func_0A2150(&D_002FE5B8, (short)func_09F3F0(rect), (short)func_09F420(rect), (short)func_09F450(rect), (short)func_09F508(rect), 0x40602020);
            D_002FE5B8.i14 = D_001D9B3C;
        } else {
            done = 1;
        }
    } while (!done && D_001D9B4C < 6);
    func_0ACDE8(6);
fin:
    D_002FE5B8.i14 = D_001D9B3C;
    func_0CEB28(5);
}
