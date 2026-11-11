/* LEVEL_05:0x0D6308 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_001F5B60;
extern int D_001F5B64;
extern char D_001EBDB0[];
extern int D_001F5A9C;
extern int D_001F5AA0;
extern int D_001F5AB8;
extern int D_001F5ABC;
extern int D_001F5AB0;
extern int D_001F5AB4;
extern int D_001F5AC0;
extern unsigned D_001F5ACC;
extern Step D_001F5AD0[];
extern int D_001F5AA4;
extern int D_001F5AA8;
extern Obj D_00319038;

extern int func_12DE28(int id);
extern void func_0B11A8(void *p, int a, int b);
extern void func_0D60A8(int a, int b);
extern int func_0B45C8(int n);
extern void func_0A9AC0(Obj *o);
extern void func_0ACCC8(int p, int *buf, float f);
extern int func_0A6C40(int *buf);
extern int func_0A6C70(int *buf);
extern int func_0A6CA0(int *buf);
extern int func_0A6D58(int *buf);
extern void func_0A99A0(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0D62A0(int n);

void func_0D6308(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_001F5B60 != id) {
        D_001F5B64 = func_12DE28(id);
        D_001F5B60 = id;
    }
    func_0B11A8(D_001EBDB0, 3, 1);
    sb = D_001F5AA0;
    sa = D_001F5A9C;
    func_0D60A8(a, b);
    D_001F5A9C = sa;
    D_001F5AA0 = sb;
    if (D_001F5AB8 != 0) {
        if (D_001F5ABC == D_001F5B64)
            goto fin;
    } else {
        func_0B45C8(6);
    }
    D_001F5AB8 = 1;
    D_001F5AB4 = D_001F5AB0;
    done = 0;
    D_001F5ABC = D_001F5B64;
    D_001F5AC0 = func_12DE28(c);
    D_00319038.i14 = D_001F5ABC;
    do {
        D_00319038.fl20 |= 0x20;
        func_0A9AC0(&D_00319038);
        D_00319038.fl20 &= ~0x20;
        if (D_00319038.s26 >= D_00319038.i0C) {
            D_001F5ACC = D_001F5ACC + 1;
            func_0ACCC8(D_001F5AD0[D_001F5ACC].p4, rect, 0.0f);
            D_001F5AA4 = a - func_0A6C40(rect);
            D_001F5AA8 = b - func_0A6C70(rect);
            rect[0] = rect[0] + D_001F5AA4;
            rect[2] = rect[2] + D_001F5AA4;
            rect[1] = rect[1] + D_001F5AA8;
            rect[3] = rect[3] + D_001F5AA8;
            func_0A99A0(&D_00319038, (short)func_0A6C40(rect), (short)func_0A6C70(rect), (short)func_0A6CA0(rect), (short)func_0A6D58(rect), 0x40602020);
            D_00319038.i14 = D_001F5ABC;
        } else {
            done = 1;
        }
    } while (!done && D_001F5ACC < 6);
    func_0B45C8(6);
fin:
    D_00319038.i14 = D_001F5ABC;
    func_0D62A0(5);
}
