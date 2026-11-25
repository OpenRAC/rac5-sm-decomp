/* LEVEL_24:0x0C8E40 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_002F8860[];
extern struct Game *D_001C4C2C;
extern unsigned int D_001D4110;
extern unsigned char D_001D4118;
extern unsigned char D_001D410C;
extern int D_001D4108;
extern int D_001D5228;

extern struct Item *func_0D1D60(char *p);
extern int func_022448(int a, int b);
extern int func_0C8DE0(struct Item *x);
extern unsigned int func_0812C0(int a);
extern int func_081268(int a);
extern int func_0D2780(char *p);
extern int func_0AF8B0(int a);
extern int func_0D2020(char *p, int b);

int func_0C8E40(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0D1D60(D_002F8860);
    if (x != 0) {
        if (func_022448(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0C8DE0)(x);
            D_001D4110 = x->f0C;
        }
    }
    if (D_001C4C2C->limit >= D_001D4110 && D_001D4118 != 0) {
        D_001D410C = 1;
    } else {
        D_001D410C = 0;
    }
    a = func_0812C0(0x6B10);
    b = func_081268(0x6B10);
    if ((a & 0x1008) != 0) {
        D_001D4108 = 3;
        return 3;
    }
    r = func_0D2780(D_002F8860);
    if (r == 1 && (a & 0x4000) != 0 && D_001D410C != 0) {
        r2 = func_0AF8B0(1);
        D_001D5228 = r;
        return r2;
    }
    return func_0D2020(D_002F8860, b);
}
