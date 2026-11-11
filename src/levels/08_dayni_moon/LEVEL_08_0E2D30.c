/* LEVEL_08:0x0E2D30 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_0024F6A0;
extern int D_0024F6A4;
extern char D_002458F0[];
extern int D_0024F5DC;
extern int D_0024F5E0;
extern int D_0024F5F8;
extern int D_0024F5FC;
extern int D_0024F5F0;
extern int D_0024F5F4;
extern int D_0024F600;
extern unsigned D_0024F60C;
extern Step D_0024F610[];
extern int D_0024F5E4;
extern int D_0024F5E8;
extern Obj D_0037C3F8;

extern int func_1439E8(int id);
extern void func_0BD880(void *p, int a, int b);
extern void func_0E2AD0(int a, int b);
extern int func_0C0F10(int n);
extern void func_0B5E38(Obj *o);
extern void func_0B9040(int p, int *buf, float f);
extern int func_0B2F78(int *buf);
extern int func_0B2FA8(int *buf);
extern int func_0B2FD8(int *buf);
extern int func_0B3090(int *buf);
extern void func_0B5D18(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0E2CC8(int n);

void func_0E2D30(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_0024F6A0 != id) {
        D_0024F6A4 = func_1439E8(id);
        D_0024F6A0 = id;
    }
    func_0BD880(D_002458F0, 3, 1);
    sb = D_0024F5E0;
    sa = D_0024F5DC;
    func_0E2AD0(a, b);
    D_0024F5DC = sa;
    D_0024F5E0 = sb;
    if (D_0024F5F8 != 0) {
        if (D_0024F5FC == D_0024F6A4)
            goto fin;
    } else {
        func_0C0F10(6);
    }
    D_0024F5F8 = 1;
    D_0024F5F4 = D_0024F5F0;
    done = 0;
    D_0024F5FC = D_0024F6A4;
    D_0024F600 = func_1439E8(c);
    D_0037C3F8.i14 = D_0024F5FC;
    do {
        D_0037C3F8.fl20 |= 0x20;
        func_0B5E38(&D_0037C3F8);
        D_0037C3F8.fl20 &= ~0x20;
        if (D_0037C3F8.s26 >= D_0037C3F8.i0C) {
            D_0024F60C = D_0024F60C + 1;
            func_0B9040(D_0024F610[D_0024F60C].p4, rect, 0.0f);
            D_0024F5E4 = a - func_0B2F78(rect);
            D_0024F5E8 = b - func_0B2FA8(rect);
            rect[0] = rect[0] + D_0024F5E4;
            rect[2] = rect[2] + D_0024F5E4;
            rect[1] = rect[1] + D_0024F5E8;
            rect[3] = rect[3] + D_0024F5E8;
            func_0B5D18(&D_0037C3F8, (short)func_0B2F78(rect), (short)func_0B2FA8(rect), (short)func_0B2FD8(rect), (short)func_0B3090(rect), 0x40602020);
            D_0037C3F8.i14 = D_0024F5FC;
        } else {
            done = 1;
        }
    } while (!done && D_0024F60C < 6);
    func_0C0F10(6);
fin:
    D_0037C3F8.i14 = D_0024F5FC;
    func_0E2CC8(5);
}
