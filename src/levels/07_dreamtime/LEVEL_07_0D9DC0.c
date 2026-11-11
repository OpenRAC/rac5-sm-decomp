/* LEVEL_07:0x0D9DC0 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_0021AAE0;
extern int D_0021AAE4;
extern char D_00210D30[];
extern int D_0021AA1C;
extern int D_0021AA20;
extern int D_0021AA38;
extern int D_0021AA3C;
extern int D_0021AA30;
extern int D_0021AA34;
extern int D_0021AA40;
extern unsigned D_0021AA4C;
extern Step D_0021AA50[];
extern int D_0021AA24;
extern int D_0021AA28;
extern Obj D_00342A78;

extern int func_1354B0(int id);
extern void func_0B4C48(void *p, int a, int b);
extern void func_0D9B60(int a, int b);
extern int func_0B8080(int n);
extern void func_0AD500(Obj *o);
extern void func_0B0708(int p, int *buf, float f);
extern int func_0AA680(int *buf);
extern int func_0AA6B0(int *buf);
extern int func_0AA6E0(int *buf);
extern int func_0AA798(int *buf);
extern void func_0AD3E0(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0D9D58(int n);

void func_0D9DC0(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_0021AAE0 != id) {
        D_0021AAE4 = func_1354B0(id);
        D_0021AAE0 = id;
    }
    func_0B4C48(D_00210D30, 3, 1);
    sb = D_0021AA20;
    sa = D_0021AA1C;
    func_0D9B60(a, b);
    D_0021AA1C = sa;
    D_0021AA20 = sb;
    if (D_0021AA38 != 0) {
        if (D_0021AA3C == D_0021AAE4)
            goto fin;
    } else {
        func_0B8080(6);
    }
    D_0021AA38 = 1;
    D_0021AA34 = D_0021AA30;
    done = 0;
    D_0021AA3C = D_0021AAE4;
    D_0021AA40 = func_1354B0(c);
    D_00342A78.i14 = D_0021AA3C;
    do {
        D_00342A78.fl20 |= 0x20;
        func_0AD500(&D_00342A78);
        D_00342A78.fl20 &= ~0x20;
        if (D_00342A78.s26 >= D_00342A78.i0C) {
            D_0021AA4C = D_0021AA4C + 1;
            func_0B0708(D_0021AA50[D_0021AA4C].p4, rect, 0.0f);
            D_0021AA24 = a - func_0AA680(rect);
            D_0021AA28 = b - func_0AA6B0(rect);
            rect[0] = rect[0] + D_0021AA24;
            rect[2] = rect[2] + D_0021AA24;
            rect[1] = rect[1] + D_0021AA28;
            rect[3] = rect[3] + D_0021AA28;
            func_0AD3E0(&D_00342A78, (short)func_0AA680(rect), (short)func_0AA6B0(rect), (short)func_0AA6E0(rect), (short)func_0AA798(rect), 0x40602020);
            D_00342A78.i14 = D_0021AA3C;
        } else {
            done = 1;
        }
    } while (!done && D_0021AA4C < 6);
    func_0B8080(6);
fin:
    D_00342A78.i14 = D_0021AA3C;
    func_0D9D58(5);
}
