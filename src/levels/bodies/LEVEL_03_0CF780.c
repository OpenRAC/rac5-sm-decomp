/* LEVEL_03:0x0CF780 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
typedef struct Item {
    char pad0[0x38];
    int f38;
    char pad3C[4];
    int f40;
} Item;

typedef struct Menu {
    char pad0[0xC];
    unsigned fC;
    char pad10[4];
    int f14;
} Menu;

typedef struct Cfg {
    char pad0[0x1C68];
    unsigned f1C68;
} Cfg;

extern Cfg *D_0020C62C;
extern int D_0021BB14;
extern int D_0021BB10;
extern int D_0021CC28;
extern unsigned func_087E78(long long value);
extern int D_00347820[];
extern int func_0D81E0(int *set);
extern Item *func_024540(int a, int b);
extern int func_0244F8(int x, int y);
extern int func_0B5E08(int a);
extern void func_0CF428(void);

void func_0CF780(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_087E78(0x6B10);
    m = (Menu *)func_0D81E0(D_00347820);
    if (m == 0) {
        return;
    }
    a = func_024540(m->f14, -1);
    b = (Item *)func_0244F8(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_0020C62C->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_0021BB14 != 0) {
            func_0B5E08(8);
            D_0021BB14--;
        }
    } else if (keys & 0x20) {
        if (D_0021BB14 != lim) {
            func_0B5E08(8);
            D_0021BB14++;
        }
    } else if (keys & 0x10) {
        if (D_0021BB14 != lim) {
            func_0B5E08(8);
            D_0021BB14 += 10;
        }
    } else if (keys & 0x40) {
        if (D_0021BB14 != 0) {
            func_0B5E08(8);
            D_0021BB14 -= 10;
        }
    } else if (keys & 0x1000) {
        D_0021CC28 = 0;
        func_0B5E08(0);
        return;
    }
    if (lim < D_0021BB14) {
        D_0021BB14 = lim;
    }
    if (D_0021BB14 < 0) {
        D_0021BB14 = 0;
    }
    if (keys & 0x4000) {
        D_0021BB10 = D_0021BB14 * cnt;
        func_0B5E08(1);
        func_0CF428();
    }
}
