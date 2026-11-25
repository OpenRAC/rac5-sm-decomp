/* LEVEL_22:0x0BDA40 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_00282560[];
extern struct Game *D_0015332C;
extern unsigned int D_00162810;
extern unsigned char D_00162818;
extern unsigned char D_0016280C;
extern int D_00162808;
extern int D_00163928;

extern struct Item *func_0C6938(char *p);
extern int func_01F4A8(int a, int b);
extern int func_0BD9E0(struct Item *x);
extern unsigned int func_079438(int a);
extern int func_0793E0(int a);
extern int func_0C7358(char *p);
extern int func_0A4570(int a);
extern int func_0C6BF8(char *p, int b);

int func_0BDA40(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0C6938(D_00282560);
    if (x != 0) {
        if (func_01F4A8(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0BD9E0)(x);
            D_00162810 = x->f0C;
        }
    }
    if (D_0015332C->limit >= D_00162810 && D_00162818 != 0) {
        D_0016280C = 1;
    } else {
        D_0016280C = 0;
    }
    a = func_079438(0x6B10);
    b = func_0793E0(0x6B10);
    if ((a & 0x1008) != 0) {
        D_00162808 = 3;
        return 3;
    }
    r = func_0C7358(D_00282560);
    if (r == 1 && (a & 0x4000) != 0 && D_0016280C != 0) {
        r2 = func_0A4570(1);
        D_00163928 = r;
        return r2;
    }
    return func_0C6BF8(D_00282560, b);
}
