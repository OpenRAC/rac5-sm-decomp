/* LEVEL_05:0x0CDAA8 -- placement copy of LEVEL_17_0BE138.c: placement copy of LEVEL_01_0CF500.c: refreshes the pending-item state and the ready flag, then either latches a confirmed choice or forwards the request. */
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

extern char D_00318860[];
extern struct Game *D_001E332C;
extern unsigned int D_001F2810;
extern unsigned char D_001F2818;
extern unsigned char D_001F280C;
extern int D_001F2808;
extern int D_001F3928;

extern struct Item *func_0D69A0(char *p);
extern int func_023608(int a, int b);
extern int func_0CDA48(struct Item *x);
extern unsigned int func_085978(int a);
extern int func_085920(int a);
extern int func_0D73C0(char *p);
extern int func_0B45C8(int a);
extern int func_0D6C60(char *p, int b);

int func_0CDAA8(void)
{
    struct Item *x;
    int r;
    unsigned int a;
    int b;
    int r2;

    x = func_0D69A0(D_00318860);
    if (x != 0) {
        if (func_023608(x->f14, -1) != 0) {
            ((void (*)(struct Item *))func_0CDA48)(x);
            D_001F2810 = x->f0C;
        }
    }
    if (D_001E332C->limit >= D_001F2810 && D_001F2818 != 0) {
        D_001F280C = 1;
    } else {
        D_001F280C = 0;
    }
    a = func_085978(0x6B10);
    b = func_085920(0x6B10);
    if ((a & 0x1008) != 0) {
        D_001F2808 = 3;
        return 3;
    }
    r = func_0D73C0(D_00318860);
    if (r == 1 && (a & 0x4000) != 0 && D_001F280C != 0) {
        r2 = func_0B45C8(1);
        D_001F3928 = r;
        return r2;
    }
    return func_0D6C60(D_00318860, b);
}
