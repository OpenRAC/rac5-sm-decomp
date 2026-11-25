/* LEVEL_16:0x0BEBF8 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_0027AA20[];
extern struct Game *D_001A1AB4;
extern unsigned int D_001B1340;
extern unsigned char D_001B1348;
extern unsigned char D_001B133C;
extern int D_001B1338;
extern int D_001B2458;

extern struct Item *func_0C7AF0(char *p);
extern int func_022110(int a, int b);
extern int func_0BEB98(struct Item *x);
extern unsigned int func_0795B8(int a);
extern int func_079508(int a);
extern int func_0C8510(char *p);
extern int func_0A50B0(int a);
extern int func_0C7DB0(char *p, int b);

int func_0BEBF8(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0C7AF0(D_0027AA20);
    if (x != 0) {
        if (func_022110(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0BEB98)(x);
            D_001B1340 = x->f0C;
        }
    }
    if (D_001A1AB4->limit >= D_001B1340 && D_001B1348 != 0) {
        D_001B133C = 1;
    } else {
        D_001B133C = 0;
    }
    a = func_0795B8(0x6B10);
    b = func_079508(0x6B10);
    if ((a & 0x1008) != 0) {
        D_001B1338 = 3;
        return 3;
    }
    r = func_0C8510(D_0027AA20);
    if (r == 1 && (a & 0x4000) != 0 && D_001B133C != 0) {
        r2 = func_0A50B0(1);
        D_001B2458 = r;
        return r2;
    }
    return func_0C7DB0(D_0027AA20, b);
}
