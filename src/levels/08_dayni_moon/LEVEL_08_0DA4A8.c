/* LEVEL_08:0x0DA4A8 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_0037BC20[];
extern struct Game *D_0023CB2C;
extern unsigned int D_0024C350;
extern unsigned char D_0024C358;
extern unsigned char D_0024C34C;
extern int D_0024C348;
extern int D_0024D468;

extern struct Item *func_0E33C8(char *p);
extern int func_024EF0(int a, int b);
extern int func_0DA448(struct Item *x);
extern unsigned int func_090070(int a);
extern int func_090018(int a);
extern int func_0E3DE8(char *p);
extern int func_0C0F10(int a);
extern int func_0E3688(char *p, int b);

int func_0DA4A8(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0E33C8(D_0037BC20);
    if (x != 0) {
        if (func_024EF0(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0DA448)(x);
            D_0024C350 = x->f0C;
        }
    }
    if (D_0023CB2C->limit >= D_0024C350 && D_0024C358 != 0) {
        D_0024C34C = 1;
    } else {
        D_0024C34C = 0;
    }
    a = func_090070(0x6B10);
    b = func_090018(0x6B10);
    if ((a & 0x1008) != 0) {
        D_0024C348 = 3;
        return 3;
    }
    r = func_0E3DE8(D_0037BC20);
    if (r == 1 && (a & 0x4000) != 0 && D_0024C34C != 0) {
        r2 = func_0C0F10(1);
        D_0024D468 = r;
        return r2;
    }
    return func_0E3688(D_0037BC20, b);
}
