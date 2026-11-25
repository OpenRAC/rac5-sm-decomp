/* LEVEL_20:0x0A9128 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_0019E260[];
extern struct Game *D_00104194;
extern unsigned int D_00113A20;
extern unsigned char D_00113A28;
extern unsigned char D_00113A1C;
extern int D_00113A18;
extern int D_00114B38;

extern struct Item *func_0B2020(char *p);
extern int func_01EE10(int a, int b);
extern int func_0A90C8(struct Item *x);
extern unsigned int func_067228(int a);
extern int func_067178(int a);
extern int func_0B2A40(char *p);
extern int func_08F6B0(int a);
extern int func_0B22E0(char *p, int b);

int func_0A9128(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0B2020(D_0019E260);
    if (x != 0) {
        if (func_01EE10(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0A90C8)(x);
            D_00113A20 = x->f0C;
        }
    }
    if (D_00104194->limit >= D_00113A20 && D_00113A28 != 0) {
        D_00113A1C = 1;
    } else {
        D_00113A1C = 0;
    }
    a = func_067228(0x6B10);
    b = func_067178(0x6B10);
    if ((a & 0x1008) != 0) {
        D_00113A18 = 3;
        return 3;
    }
    r = func_0B2A40(D_0019E260);
    if (r == 1 && (a & 0x4000) != 0 && D_00113A1C != 0) {
        r2 = func_08F6B0(1);
        D_00114B38 = r;
        return r2;
    }
    return func_0B22E0(D_0019E260, b);
}
