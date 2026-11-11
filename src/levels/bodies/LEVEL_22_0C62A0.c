/* LEVEL_22:0x0C62A0 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_00165B60;
extern int D_00165B64;
extern char D_0015BDB0[];
extern int D_00165A9C;
extern int D_00165AA0;
extern int D_00165AB8;
extern int D_00165ABC;
extern int D_00165AB0;
extern int D_00165AB4;
extern int D_00165AC0;
extern unsigned D_00165ACC;
extern Step D_00165AD0[];
extern int D_00165AA4;
extern int D_00165AA8;
extern Obj D_00282D38;

extern int func_109980(int id);
extern void func_0A1268(void *p, int a, int b);
extern void func_0C6040(int a, int b);
extern int func_0A4570(int n);
extern void func_099B10(Obj *o);
extern void func_09CD18(int p, int *buf, float f);
extern int func_096C90(int *buf);
extern int func_096CC0(int *buf);
extern int func_096CF0(int *buf);
extern int func_096DA8(int *buf);
extern void func_0999F0(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0C6238(int n);

void func_0C62A0(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_00165B60 != id) {
        D_00165B64 = func_109980(id);
        D_00165B60 = id;
    }
    func_0A1268(D_0015BDB0, 3, 1);
    sb = D_00165AA0;
    sa = D_00165A9C;
    func_0C6040(a, b);
    D_00165A9C = sa;
    D_00165AA0 = sb;
    if (D_00165AB8 != 0) {
        if (D_00165ABC == D_00165B64)
            goto fin;
    } else {
        func_0A4570(6);
    }
    D_00165AB8 = 1;
    D_00165AB4 = D_00165AB0;
    done = 0;
    D_00165ABC = D_00165B64;
    D_00165AC0 = func_109980(c);
    D_00282D38.i14 = D_00165ABC;
    do {
        D_00282D38.fl20 |= 0x20;
        func_099B10(&D_00282D38);
        D_00282D38.fl20 &= ~0x20;
        if (D_00282D38.s26 >= D_00282D38.i0C) {
            D_00165ACC = D_00165ACC + 1;
            func_09CD18(D_00165AD0[D_00165ACC].p4, rect, 0.0f);
            D_00165AA4 = a - func_096C90(rect);
            D_00165AA8 = b - func_096CC0(rect);
            rect[0] = rect[0] + D_00165AA4;
            rect[2] = rect[2] + D_00165AA4;
            rect[1] = rect[1] + D_00165AA8;
            rect[3] = rect[3] + D_00165AA8;
            func_0999F0(&D_00282D38, (short)func_096C90(rect), (short)func_096CC0(rect), (short)func_096CF0(rect), (short)func_096DA8(rect), 0x40602020);
            D_00282D38.i14 = D_00165ABC;
        } else {
            done = 1;
        }
    } while (!done && D_00165ACC < 6);
    func_0A4570(6);
fin:
    D_00282D38.i14 = D_00165ABC;
    func_0C6238(5);
}
