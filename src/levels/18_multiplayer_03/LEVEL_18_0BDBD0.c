/* LEVEL_18:0x0BDBD0 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_0027ADA0[];
extern struct Game *D_001A2F34;
extern unsigned int D_001B27C0;
extern unsigned char D_001B27C8;
extern unsigned char D_001B27BC;
extern int D_001B27B8;
extern int D_001B38D8;

extern struct Item *func_0C6AC8(char *p);
extern int func_021758(int a, int b);
extern int func_0BDB70(struct Item *x);
extern unsigned int func_078F38(int a);
extern int func_078E88(int a);
extern int func_0C74E8(char *p);
extern int func_0A40A8(int a);
extern int func_0C6D88(char *p, int b);

int func_0BDBD0(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0C6AC8(D_0027ADA0);
    if (x != 0) {
        if (func_021758(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0BDB70)(x);
            D_001B27C0 = x->f0C;
        }
    }
    if (D_001A2F34->limit >= D_001B27C0 && D_001B27C8 != 0) {
        D_001B27BC = 1;
    } else {
        D_001B27BC = 0;
    }
    a = func_078F38(0x6B10);
    b = func_078E88(0x6B10);
    if ((a & 0x1008) != 0) {
        D_001B27B8 = 3;
        return 3;
    }
    r = func_0C74E8(D_0027ADA0);
    if (r == 1 && (a & 0x4000) != 0 && D_001B27BC != 0) {
        r2 = func_0A40A8(1);
        D_001B38D8 = r;
        return r2;
    }
    return func_0C6D88(D_0027ADA0, b);
}
