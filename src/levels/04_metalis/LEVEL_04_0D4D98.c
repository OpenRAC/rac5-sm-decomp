/* LEVEL_04:0x0D4D98 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_003471A0[];
extern struct Game *D_0020D12C;
extern unsigned int D_0021C950;
extern unsigned char D_0021C958;
extern unsigned char D_0021C94C;
extern int D_0021C948;
extern int D_0021DA68;

extern struct Item *func_0DDCB8(char *p);
extern int func_0242F0(int a, int b);
extern int func_0D4D38(struct Item *x);
extern unsigned int func_08B2B8(int a);
extern int func_08B260(int a);
extern int func_0DE6D8(char *p);
extern int func_0BB828(int a);
extern int func_0DDF78(char *p, int b);

int func_0D4D98(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0DDCB8(D_003471A0);
    if (x != 0) {
        if (func_0242F0(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0D4D38)(x);
            D_0021C950 = x->f0C;
        }
    }
    if (D_0020D12C->limit >= D_0021C950 && D_0021C958 != 0) {
        D_0021C94C = 1;
    } else {
        D_0021C94C = 0;
    }
    a = func_08B2B8(0x6B10);
    b = func_08B260(0x6B10);
    if ((a & 0x1008) != 0) {
        D_0021C948 = 3;
        return 3;
    }
    r = func_0DE6D8(D_003471A0);
    if (r == 1 && (a & 0x4000) != 0 && D_0021C94C != 0) {
        r2 = func_0BB828(1);
        D_0021DA68 = r;
        return r2;
    }
    return func_0DDF78(D_003471A0, b);
}
