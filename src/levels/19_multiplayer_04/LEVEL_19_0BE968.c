/* LEVEL_19:0x0BE968 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_001A2C34;
extern int D_001B24C4;
extern int D_001B24C0;
extern int D_001B35D8;
extern unsigned int func_079AA0(int value);
extern int D_0027ABA0[];
extern int func_0C73C8(int *set);
extern Item *func_021D50(int a, int b);
extern int func_021D08(int x, int y);
extern int func_0A4928(int a);
extern void func_0BE610(void);

void func_0BE968(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_079AA0(0x6B10);
    m = (Menu *)func_0C73C8(D_0027ABA0);
    if (m == 0) {
        return;
    }
    a = func_021D50(m->f14, -1);
    b = (Item *)func_021D08(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_001A2C34->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_001B24C4 != 0) {
            func_0A4928(8);
            D_001B24C4--;
        }
    } else if (keys & 0x20) {
        if (D_001B24C4 != lim) {
            func_0A4928(8);
            D_001B24C4++;
        }
    } else if (keys & 0x10) {
        if (D_001B24C4 != lim) {
            func_0A4928(8);
            D_001B24C4 += 10;
        }
    } else if (keys & 0x40) {
        if (D_001B24C4 != 0) {
            func_0A4928(8);
            D_001B24C4 -= 10;
        }
    } else if (keys & 0x1000) {
        D_001B35D8 = 0;
        func_0A4928(0);
        return;
    }
    if (lim < D_001B24C4) {
        D_001B24C4 = lim;
    }
    if (D_001B24C4 < 0) {
        D_001B24C4 = 0;
    }
    if (keys & 0x4000) {
        D_001B24C0 = D_001B24C4 * cnt;
        func_0A4928(1);
        func_0BE610();
    }
}
