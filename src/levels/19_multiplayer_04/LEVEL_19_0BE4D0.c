/* LEVEL_19:0x0BE4D0 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_0027ABA0[];
extern struct Game *D_001A2C34;
extern unsigned int D_001B24C0;
extern unsigned char D_001B24C8;
extern unsigned char D_001B24BC;
extern int D_001B24B8;
extern int D_001B35D8;

extern struct Item *func_0C73C8(char *p);
extern int func_021D50(int a, int b);
extern int func_0BE470(struct Item *x);
extern unsigned int func_079AA0(int a);
extern int func_0799F0(int a);
extern int func_0C7DE8(char *p);
extern int func_0A4928(int a);
extern int func_0C7688(char *p, int b);

int func_0BE4D0(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0C73C8(D_0027ABA0);
    if (x != 0) {
        if (func_021D50(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0BE470)(x);
            D_001B24C0 = x->f0C;
        }
    }
    if (D_001A2C34->limit >= D_001B24C0 && D_001B24C8 != 0) {
        D_001B24BC = 1;
    } else {
        D_001B24BC = 0;
    }
    a = func_079AA0(0x6B10);
    b = func_0799F0(0x6B10);
    if ((a & 0x1008) != 0) {
        D_001B24B8 = 3;
        return 3;
    }
    r = func_0C7DE8(D_0027ABA0);
    if (r == 1 && (a & 0x4000) != 0 && D_001B24BC != 0) {
        r2 = func_0A4928(1);
        D_001B35D8 = r;
        return r2;
    }
    return func_0C7688(D_0027ABA0, b);
}
