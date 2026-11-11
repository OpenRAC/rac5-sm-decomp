/* LEVEL_09:0x0D5010 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_001F05E0;
extern int D_001F05E4;
extern char D_001E6830[];
extern int D_001F051C;
extern int D_001F0520;
extern int D_001F0538;
extern int D_001F053C;
extern int D_001F0530;
extern int D_001F0534;
extern int D_001F0540;
extern unsigned D_001F054C;
extern Step D_001F0550[];
extern int D_001F0524;
extern int D_001F0528;
extern Obj D_003148F8;

extern int func_12B448(int id);
extern void func_0AFE98(void *p, int a, int b);
extern void func_0D4DB0(int a, int b);
extern int func_0B32D0(int n);
extern void func_0A87B0(Obj *o);
extern void func_0AB9B8(int p, int *buf, float f);
extern int func_0A5930(int *buf);
extern int func_0A5960(int *buf);
extern int func_0A5990(int *buf);
extern int func_0A5A48(int *buf);
extern void func_0A8690(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0D4FA8(int n);

void func_0D5010(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_001F05E0 != id) {
        D_001F05E4 = func_12B448(id);
        D_001F05E0 = id;
    }
    func_0AFE98(D_001E6830, 3, 1);
    sb = D_001F0520;
    sa = D_001F051C;
    func_0D4DB0(a, b);
    D_001F051C = sa;
    D_001F0520 = sb;
    if (D_001F0538 != 0) {
        if (D_001F053C == D_001F05E4)
            goto fin;
    } else {
        func_0B32D0(6);
    }
    D_001F0538 = 1;
    D_001F0534 = D_001F0530;
    done = 0;
    D_001F053C = D_001F05E4;
    D_001F0540 = func_12B448(c);
    D_003148F8.i14 = D_001F053C;
    do {
        D_003148F8.fl20 |= 0x20;
        func_0A87B0(&D_003148F8);
        D_003148F8.fl20 &= ~0x20;
        if (D_003148F8.s26 >= D_003148F8.i0C) {
            D_001F054C = D_001F054C + 1;
            func_0AB9B8(D_001F0550[D_001F054C].p4, rect, 0.0f);
            D_001F0524 = a - func_0A5930(rect);
            D_001F0528 = b - func_0A5960(rect);
            rect[0] = rect[0] + D_001F0524;
            rect[2] = rect[2] + D_001F0524;
            rect[1] = rect[1] + D_001F0528;
            rect[3] = rect[3] + D_001F0528;
            func_0A8690(&D_003148F8, (short)func_0A5930(rect), (short)func_0A5960(rect), (short)func_0A5990(rect), (short)func_0A5A48(rect), 0x40602020);
            D_003148F8.i14 = D_001F053C;
        } else {
            done = 1;
        }
    } while (!done && D_001F054C < 6);
    func_0B32D0(6);
fin:
    D_003148F8.i14 = D_001F053C;
    func_0D4FA8(5);
}
