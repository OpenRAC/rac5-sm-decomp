/* LEVEL_23:0x0C67C8 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_001C73AC;
extern int D_001D6894;
extern int D_001D6890;
extern int D_001D79A8;
extern unsigned int func_07DEE0(int value);
extern int D_002FDDE0[];
extern int func_0CF228(int *set);
extern Item *func_022710(int a, int b);
extern int func_0226C8(int x, int y);
extern int func_0ACDE8(int a);
extern void func_0C6470(void);

void func_0C67C8(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_07DEE0(0x6B10);
    m = (Menu *)func_0CF228(D_002FDDE0);
    if (m == 0) {
        return;
    }
    a = func_022710(m->f14, -1);
    b = (Item *)func_0226C8(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_001C73AC->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_001D6894 != 0) {
            func_0ACDE8(8);
            D_001D6894--;
        }
    } else if (keys & 0x20) {
        if (D_001D6894 != lim) {
            func_0ACDE8(8);
            D_001D6894++;
        }
    } else if (keys & 0x10) {
        if (D_001D6894 != lim) {
            func_0ACDE8(8);
            D_001D6894 += 10;
        }
    } else if (keys & 0x40) {
        if (D_001D6894 != 0) {
            func_0ACDE8(8);
            D_001D6894 -= 10;
        }
    } else if (keys & 0x1000) {
        D_001D79A8 = 0;
        func_0ACDE8(0);
        return;
    }
    if (lim < D_001D6894) {
        D_001D6894 = lim;
    }
    if (D_001D6894 < 0) {
        D_001D6894 = 0;
    }
    if (keys & 0x4000) {
        D_001D6890 = D_001D6894 * cnt;
        func_0ACDE8(1);
        func_0C6470();
    }
}
