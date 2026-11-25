/* LEVEL_02:0x0D5E90 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_00343EA0[];
extern struct Game *D_00208C2C;
extern unsigned int D_00218450;
extern unsigned char D_00218458;
extern unsigned char D_0021844C;
extern int D_00218448;
extern int D_00219568;

extern struct Item *func_0DED88(char *p);
extern int func_024FD0(int a, int b);
extern int func_0D5E30(struct Item *x);
extern unsigned int func_08E950(int a);
extern int func_08E8F8(int a);
extern int func_0DF7A8(char *p);
extern int func_0BC930(int a);
extern int func_0DF048(char *p, int b);

int func_0D5E90(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0DED88(D_00343EA0);
    if (x != 0) {
        if (func_024FD0(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0D5E30)(x);
            D_00218450 = x->f0C;
        }
    }
    if (D_00208C2C->limit >= D_00218450 && D_00218458 != 0) {
        D_0021844C = 1;
    } else {
        D_0021844C = 0;
    }
    a = func_08E950(0x6B10);
    b = func_08E8F8(0x6B10);
    if ((a & 0x1008) != 0) {
        D_00218448 = 3;
        return 3;
    }
    r = func_0DF7A8(D_00343EA0);
    if (r == 1 && (a & 0x4000) != 0 && D_0021844C != 0) {
        r2 = func_0BC930(1);
        D_00219568 = r;
        return r2;
    }
    return func_0DF048(D_00343EA0, b);
}
