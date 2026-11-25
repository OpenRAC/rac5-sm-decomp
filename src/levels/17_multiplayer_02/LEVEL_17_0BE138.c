/* LEVEL_17:0x0BE138 -- placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_0026BD20[];
extern struct Game *D_001950B4;
extern unsigned int D_001A4940;
extern unsigned char D_001A4948;
extern unsigned char D_001A493C;
extern int D_001A4938;
extern int D_001A5A58;

extern struct Item *func_0C7030(char *p);
extern int func_021A90(int a, int b);
extern int func_0BE0D8(struct Item *x);
extern unsigned int func_07A030(int a);
extern int func_079F80(int a);
extern int func_0C7A50(char *p);
extern int func_0A4590(int a);
extern int func_0C72F0(char *p, int b);

int func_0BE138(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0C7030(D_0026BD20);
    if (x != 0) {
        if (func_021A90(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0BE0D8)(x);
            D_001A4940 = x->f0C;
        }
    }
    if (D_001950B4->limit >= D_001A4940 && D_001A4948 != 0) {
        D_001A493C = 1;
    } else {
        D_001A493C = 0;
    }
    a = func_07A030(0x6B10);
    b = func_079F80(0x6B10);
    if ((a & 0x1008) != 0) {
        D_001A4938 = 3;
        return 3;
    }
    r = func_0C7A50(D_0026BD20);
    if (r == 1 && (a & 0x4000) != 0 && D_001A493C != 0) {
        r2 = func_0A4590(1);
        D_001A5A58 = r;
        return r2;
    }
    return func_0C72F0(D_0026BD20, b);
}
