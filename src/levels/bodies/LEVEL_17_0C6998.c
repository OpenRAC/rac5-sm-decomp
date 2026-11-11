/* LEVEL_17:0x0C6998 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_001A7C90;
extern int D_001A7C94;
extern char D_0019E0B0[];
extern int D_001A7BCC;
extern int D_001A7BD0;
extern int D_001A7BE8;
extern int D_001A7BEC;
extern int D_001A7BE0;
extern int D_001A7BE4;
extern int D_001A7BF0;
extern unsigned D_001A7BFC;
extern Step D_001A7C00[];
extern int D_001A7BD4;
extern int D_001A7BD8;
extern Obj D_0026C4F8;

extern int func_10E8A8(int id);
extern void func_0A0A48(void *p, int a, int b);
extern void func_0C6738(int a, int b);
extern int func_0A4590(int n);
extern void func_0990E8(Obj *o);
extern void func_09C2F0(int p, int *buf, float f);
extern int func_096208(int *buf);
extern int func_096238(int *buf);
extern int func_096268(int *buf);
extern int func_096320(int *buf);
extern void func_098FC8(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0C6930(int n);

void func_0C6998(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_001A7C90 != id) {
        D_001A7C94 = func_10E8A8(id);
        D_001A7C90 = id;
    }
    func_0A0A48(D_0019E0B0, 3, 1);
    sb = D_001A7BD0;
    sa = D_001A7BCC;
    func_0C6738(a, b);
    D_001A7BCC = sa;
    D_001A7BD0 = sb;
    if (D_001A7BE8 != 0) {
        if (D_001A7BEC == D_001A7C94)
            goto fin;
    } else {
        func_0A4590(6);
    }
    D_001A7BE8 = 1;
    D_001A7BE4 = D_001A7BE0;
    done = 0;
    D_001A7BEC = D_001A7C94;
    D_001A7BF0 = func_10E8A8(c);
    D_0026C4F8.i14 = D_001A7BEC;
    do {
        D_0026C4F8.fl20 |= 0x20;
        func_0990E8(&D_0026C4F8);
        D_0026C4F8.fl20 &= ~0x20;
        if (D_0026C4F8.s26 >= D_0026C4F8.i0C) {
            D_001A7BFC = D_001A7BFC + 1;
            func_09C2F0(D_001A7C00[D_001A7BFC].p4, rect, 0.0f);
            D_001A7BD4 = a - func_096208(rect);
            D_001A7BD8 = b - func_096238(rect);
            rect[0] = rect[0] + D_001A7BD4;
            rect[2] = rect[2] + D_001A7BD4;
            rect[1] = rect[1] + D_001A7BD8;
            rect[3] = rect[3] + D_001A7BD8;
            func_098FC8(&D_0026C4F8, (short)func_096208(rect), (short)func_096238(rect), (short)func_096268(rect), (short)func_096320(rect), 0x40602020);
            D_0026C4F8.i14 = D_001A7BEC;
        } else {
            done = 1;
        }
    } while (!done && D_001A7BFC < 6);
    func_0A4590(6);
fin:
    D_0026C4F8.i14 = D_001A7BEC;
    func_0C6930(5);
}
