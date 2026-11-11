/* LEVEL_03:0x0D7B48 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_0021EE60;
extern int D_0021EE64;
extern char D_002150B0[];
extern int D_0021ED9C;
extern int D_0021EDA0;
extern int D_0021EDB8;
extern int D_0021EDBC;
extern int D_0021EDB0;
extern int D_0021EDB4;
extern int D_0021EDC0;
extern unsigned D_0021EDCC;
extern Step D_0021EDD0[];
extern int D_0021EDA4;
extern int D_0021EDA8;
extern Obj D_00347FF8;

extern int func_130878(int id);
extern void func_0B29D0(void *p, int a, int b);
extern void func_0D78E8(int a, int b);
extern int func_0B5E08(int n);
extern void func_0AB280(Obj *o);
extern void func_0AE488(int p, int *buf, float f);
extern int func_0A8400(int *buf);
extern int func_0A8430(int *buf);
extern int func_0A8460(int *buf);
extern int func_0A8518(int *buf);
extern void func_0AB160(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0D7AE0(int n);

void func_0D7B48(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_0021EE60 != id) {
        D_0021EE64 = func_130878(id);
        D_0021EE60 = id;
    }
    func_0B29D0(D_002150B0, 3, 1);
    sb = D_0021EDA0;
    sa = D_0021ED9C;
    func_0D78E8(a, b);
    D_0021ED9C = sa;
    D_0021EDA0 = sb;
    if (D_0021EDB8 != 0) {
        if (D_0021EDBC == D_0021EE64)
            goto fin;
    } else {
        func_0B5E08(6);
    }
    D_0021EDB8 = 1;
    D_0021EDB4 = D_0021EDB0;
    done = 0;
    D_0021EDBC = D_0021EE64;
    D_0021EDC0 = func_130878(c);
    D_00347FF8.i14 = D_0021EDBC;
    do {
        D_00347FF8.fl20 |= 0x20;
        func_0AB280(&D_00347FF8);
        D_00347FF8.fl20 &= ~0x20;
        if (D_00347FF8.s26 >= D_00347FF8.i0C) {
            D_0021EDCC = D_0021EDCC + 1;
            func_0AE488(D_0021EDD0[D_0021EDCC].p4, rect, 0.0f);
            D_0021EDA4 = a - func_0A8400(rect);
            D_0021EDA8 = b - func_0A8430(rect);
            rect[0] = rect[0] + D_0021EDA4;
            rect[2] = rect[2] + D_0021EDA4;
            rect[1] = rect[1] + D_0021EDA8;
            rect[3] = rect[3] + D_0021EDA8;
            func_0AB160(&D_00347FF8, (short)func_0A8400(rect), (short)func_0A8430(rect), (short)func_0A8460(rect), (short)func_0A8518(rect), 0x40602020);
            D_00347FF8.i14 = D_0021EDBC;
        } else {
            done = 1;
        }
    } while (!done && D_0021EDCC < 6);
    func_0B5E08(6);
fin:
    D_00347FF8.i14 = D_0021EDBC;
    func_0D7AE0(5);
}
