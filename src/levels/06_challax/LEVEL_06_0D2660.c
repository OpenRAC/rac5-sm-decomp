/* LEVEL_06:0x0D2660 -- placement copy of LEVEL_01_0D7D60.c: steps a scripted camera/window sequence: refreshes cached ids and advances the scene object. */
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

extern int D_001F56E0;
extern int D_001F56E4;
extern char D_001EB930[];
extern int D_001F561C;
extern int D_001F5620;
extern int D_001F5638;
extern int D_001F563C;
extern int D_001F5630;
extern int D_001F5634;
extern int D_001F5640;
extern unsigned D_001F564C;
extern Step D_001F5650[];
extern int D_001F5624;
extern int D_001F5628;
extern Obj D_00319EF8;

extern int func_128B80(int id);
extern void func_0AD428(void *p, int a, int b);
extern void func_0D2400(int a, int b);
extern int func_0B0848(int n);
extern void func_0A5CD0(Obj *o);
extern void func_0A8ED8(int p, int *buf, float f);
extern int func_0A2E50(int *buf);
extern int func_0A2E80(int *buf);
extern int func_0A2EB0(int *buf);
extern int func_0A2F68(int *buf);
extern void func_0A5BB0(Obj *o, int a, int b, int c, int d, unsigned e);
extern void func_0D25F8(int n);

void func_0D2660(int a, int b, int id, int c)
{
    int rect[4];
    int sa;
    int sb;
    int done;

    if (D_001F56E0 != id) {
        D_001F56E4 = func_128B80(id);
        D_001F56E0 = id;
    }
    func_0AD428(D_001EB930, 3, 1);
    sb = D_001F5620;
    sa = D_001F561C;
    func_0D2400(a, b);
    D_001F561C = sa;
    D_001F5620 = sb;
    if (D_001F5638 != 0) {
        if (D_001F563C == D_001F56E4)
            goto fin;
    } else {
        func_0B0848(6);
    }
    D_001F5638 = 1;
    D_001F5634 = D_001F5630;
    done = 0;
    D_001F563C = D_001F56E4;
    D_001F5640 = func_128B80(c);
    D_00319EF8.i14 = D_001F563C;
    do {
        D_00319EF8.fl20 |= 0x20;
        func_0A5CD0(&D_00319EF8);
        D_00319EF8.fl20 &= ~0x20;
        if (D_00319EF8.s26 >= D_00319EF8.i0C) {
            D_001F564C = D_001F564C + 1;
            func_0A8ED8(D_001F5650[D_001F564C].p4, rect, 0.0f);
            D_001F5624 = a - func_0A2E50(rect);
            D_001F5628 = b - func_0A2E80(rect);
            rect[0] = rect[0] + D_001F5624;
            rect[2] = rect[2] + D_001F5624;
            rect[1] = rect[1] + D_001F5628;
            rect[3] = rect[3] + D_001F5628;
            func_0A5BB0(&D_00319EF8, (short)func_0A2E50(rect), (short)func_0A2E80(rect), (short)func_0A2EB0(rect), (short)func_0A2F68(rect), 0x40602020);
            D_00319EF8.i14 = D_001F563C;
        } else {
            done = 1;
        }
    } while (!done && D_001F564C < 6);
    func_0B0848(6);
fin:
    D_00319EF8.i14 = D_001F563C;
    func_0D25F8(5);
}
