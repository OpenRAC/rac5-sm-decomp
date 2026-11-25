/* LEVEL_06:0x0C9E00 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
struct Item {
    char pad0[0xC];
    unsigned int f0C;
    char pad1[0x14 - 0x10];
    int f14;
};

struct Game {
    char pad0[0x1C68];
    unsigned int limit;
};

extern char D_00319720[];
extern struct Game *D_001E2EAC;
extern unsigned int D_001F2390;
extern unsigned char D_001F2398;
extern unsigned char D_001F238C;
extern int D_001F2388;
extern int D_001F34A8;

extern struct Item *func_0D2CF8(char *p);
extern int func_022D78(int a, int b);
extern int func_0C9DA0(struct Item *x);
extern unsigned int func_080E98(int a);
extern int func_080E40(int a);
extern int func_0D3718(char *p);
extern int func_0B0848(int a);
extern int func_0D2FB8(char *p, int b);

int func_0C9E00(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0D2CF8(D_00319720);
    if (x != 0) {
        if (func_022D78(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0C9DA0)(x);
            D_001F2390 = x->f0C;
        }
    }
    if (D_001E2EAC->limit >= D_001F2390 && D_001F2398 != 0) {
        D_001F238C = 1;
    } else {
        D_001F238C = 0;
    }
    a = func_080E98(0x6B10);
    b = func_080E40(0x6B10);
    if ((a & 0x1008) != 0) {
        D_001F2388 = 3;
        return 3;
    }
    r = func_0D3718(D_00319720);
    if (r == 1 && (a & 0x4000) != 0 && D_001F238C != 0) {
        r2 = func_0B0848(1);
        D_001F34A8 = r;
        return r2;
    }
    return func_0D2FB8(D_00319720, b);
}
