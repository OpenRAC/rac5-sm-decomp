/* LEVEL_23:0x0C6330 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_002FDDE0[];
extern struct Game *D_001C73AC;
extern unsigned int D_001D6890;
extern unsigned char D_001D6898;
extern unsigned char D_001D688C;
extern int D_001D6888;
extern int D_001D79A8;

extern struct Item *func_0CF228(char *p);
extern int func_022710(int a, int b);
extern int func_0C62D0(struct Item *x);
extern unsigned int func_07DEE0(int a);
extern int func_07DE88(int a);
extern int func_0CFC48(char *p);
extern int func_0ACDE8(int a);
extern int func_0CF4E8(char *p, int b);

int func_0C6330(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0CF228(D_002FDDE0);
    if (x != 0) {
        if (func_022710(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0C62D0)(x);
            D_001D6890 = x->f0C;
        }
    }
    if (D_001C73AC->limit >= D_001D6890 && D_001D6898 != 0) {
        D_001D688C = 1;
    } else {
        D_001D688C = 0;
    }
    a = func_07DEE0(0x6B10);
    b = func_07DE88(0x6B10);
    if ((a & 0x1008) != 0) {
        D_001D6888 = 3;
        return 3;
    }
    r = func_0CFC48(D_002FDDE0);
    if (r == 1 && (a & 0x4000) != 0 && D_001D688C != 0) {
        r2 = func_0ACDE8(1);
        D_001D79A8 = r;
        return r2;
    }
    return func_0CF4E8(D_002FDDE0, b);
}
