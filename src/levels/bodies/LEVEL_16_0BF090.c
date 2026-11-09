/* LEVEL_16:0x0BF090 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_001A1AB4;
extern int D_001B1344;
extern int D_001B1340;
extern int D_001B2458;
extern unsigned func_0795B8(long long value);
extern int D_0027AA20[];
extern int func_0C7AF0(int *set);
extern Item *func_022110(int a, int b);
extern int func_0220C8(int x, int y);
extern int func_0A50B0(int a);
extern void func_0BED38(void);

void func_0BF090(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_0795B8(0x6B10);
    m = (Menu *)func_0C7AF0(D_0027AA20);
    if (m == 0) {
        return;
    }
    a = func_022110(m->f14, -1);
    b = (Item *)func_0220C8(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_001A1AB4->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_001B1344 != 0) {
            func_0A50B0(8);
            D_001B1344--;
        }
    } else if (keys & 0x20) {
        if (D_001B1344 != lim) {
            func_0A50B0(8);
            D_001B1344++;
        }
    } else if (keys & 0x10) {
        if (D_001B1344 != lim) {
            func_0A50B0(8);
            D_001B1344 += 10;
        }
    } else if (keys & 0x40) {
        if (D_001B1344 != 0) {
            func_0A50B0(8);
            D_001B1344 -= 10;
        }
    } else if (keys & 0x1000) {
        D_001B2458 = 0;
        func_0A50B0(0);
        return;
    }
    if (lim < D_001B1344) {
        D_001B1344 = lim;
    }
    if (D_001B1344 < 0) {
        D_001B1344 = 0;
    }
    if (keys & 0x4000) {
        D_001B1340 = D_001B1344 * cnt;
        func_0A50B0(1);
        func_0BED38();
    }
}
