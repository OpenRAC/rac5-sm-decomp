/* LEVEL_10:0x0D0940 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_00335DA0[];
extern struct Game *D_001FCFAC;
extern unsigned int D_0020C490;
extern unsigned char D_0020C498;
extern unsigned char D_0020C48C;
extern int D_0020C488;
extern int D_0020D5A8;

extern struct Item *func_0D9838(char *p);
extern int func_023FD8(int a, int b);
extern int func_0D08E0(struct Item *x);
extern unsigned int func_088388(int a);
extern int func_088330(int a);
extern int func_0DA258(char *p);
extern int func_0B71F8(int a);
extern int func_0D9AF8(char *p, int b);

int func_0D0940(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0D9838(D_00335DA0);
    if (x != 0) {
        if (func_023FD8(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0D08E0)(x);
            D_0020C490 = x->f0C;
        }
    }
    if (D_001FCFAC->limit >= D_0020C490 && D_0020C498 != 0) {
        D_0020C48C = 1;
    } else {
        D_0020C48C = 0;
    }
    a = func_088388(0x6B10);
    b = func_088330(0x6B10);
    if ((a & 0x1008) != 0) {
        D_0020C488 = 3;
        return 3;
    }
    r = func_0DA258(D_00335DA0);
    if (r == 1 && (a & 0x4000) != 0 && D_0020C48C != 0) {
        r2 = func_0B71F8(1);
        D_0020D5A8 = r;
        return r2;
    }
    return func_0D9AF8(D_00335DA0, b);
}
