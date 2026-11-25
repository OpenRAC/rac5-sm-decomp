/* LEVEL_15:0x0AFB40 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_002441E0[];
extern struct Game *D_00148C2C;
extern unsigned int D_00158110;
extern unsigned char D_00158118;
extern unsigned char D_0015810C;
extern int D_00158108;
extern int D_00159228;

extern struct Item *func_0B8A38(char *p);
extern int func_01E9D8(int a, int b);
extern int func_0AFAE0(struct Item *x);
extern unsigned int func_06C700(int a);
extern int func_06C6A8(int a);
extern int func_0B9458(char *p);
extern int func_096530(int a);
extern int func_0B8CF8(char *p, int b);

int func_0AFB40(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0B8A38(D_002441E0);
    if (x != 0) {
        if (func_01E9D8(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0AFAE0)(x);
            D_00158110 = x->f0C;
        }
    }
    if (D_00148C2C->limit >= D_00158110 && D_00158118 != 0) {
        D_0015810C = 1;
    } else {
        D_0015810C = 0;
    }
    a = func_06C700(0x6B10);
    b = func_06C6A8(0x6B10);
    if ((a & 0x1008) != 0) {
        D_00158108 = 3;
        return 3;
    }
    r = func_0B9458(D_002441E0);
    if (r == 1 && (a & 0x4000) != 0 && D_0015810C != 0) {
        r2 = func_096530(1);
        D_00159228 = r;
        return r2;
    }
    return func_0B8CF8(D_002441E0, b);
}
