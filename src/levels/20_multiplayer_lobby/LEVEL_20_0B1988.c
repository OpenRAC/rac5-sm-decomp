/* LEVEL_20:0x0B1988 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_00116D70;
extern int D_00116D74;
extern char D_0010D190[];
extern int D_00116CAC;
extern int D_00116CB0;
extern int D_00116CC8;
extern int D_00116CCC;
extern int D_00116CC0;
extern int D_00116CC4;
extern int D_00116CD0;
extern unsigned D_00116CDC;
extern Step D_00116CE0[];
extern int D_00116CB4;
extern int D_00116CB8;
extern Obj D_0019EA38;

extern int func_0E2118(int id);
extern void func_08BC48(void *p, int a, int b);
extern void func_0B1728(int a, int b);
extern int func_08F6B0(int n);
extern void func_0842E8(Obj *o);
extern void func_0874F0(int p, int *buf, float f);
extern int func_081408(int *buf);
extern int func_081438(int *buf);
extern int func_081468(int *buf);
extern int func_081520(int *buf);
extern void func_0841C8(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0B1920(int n);

void func_0B1988(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_00116D70 != id) {
        D_00116D74 = func_0E2118(id);
        D_00116D70 = id;
    }
    func_08BC48(D_0010D190, 3, 1);
    sb = D_00116CB0;
    sa = D_00116CAC;
    func_0B1728(a, b);
    D_00116CAC = sa;
    D_00116CB0 = sb;
    if (D_00116CC8 != 0) {
        if (D_00116CCC == D_00116D74)
            goto fin;
    } else {
        func_08F6B0(6);
    }
    D_00116CC8 = 1;
    D_00116CC4 = D_00116CC0;
    done = 0;
    D_00116CCC = D_00116D74;
    D_00116CD0 = func_0E2118(c);
    D_0019EA38.i14 = D_00116CCC;
    do {
        D_0019EA38.fl20 |= 0x20;
        func_0842E8(&D_0019EA38);
        D_0019EA38.fl20 &= ~0x20;
        if (D_0019EA38.s26 >= D_0019EA38.i0C) {
            D_00116CDC = D_00116CDC + 1;
            func_0874F0(D_00116CE0[D_00116CDC].p4, rect, 0.0f);
            D_00116CB4 = a - func_081408(rect);
            D_00116CB8 = b - func_081438(rect);
            rect[0] = rect[0] + D_00116CB4;
            rect[2] = rect[2] + D_00116CB4;
            rect[1] = rect[1] + D_00116CB8;
            rect[3] = rect[3] + D_00116CB8;
            func_0841C8(&D_0019EA38, (short)func_081408(rect), (short)func_081438(rect), (short)func_081468(rect), (short)func_081520(rect), 0x40602020);
            D_0019EA38.i14 = D_00116CCC;
        } else {
            done = 1;
        }
    } while (!done && D_00116CDC < 6);
    func_08F6B0(6);
fin:
    D_0019EA38.i14 = D_00116CCC;
    func_0B1920(5);
}
