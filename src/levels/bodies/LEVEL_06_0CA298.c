/* LEVEL_06:0x0CA298 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_001E2EAC;
extern int D_001F2394;
extern int D_001F2390;
extern int D_001F34A8;
extern unsigned int func_080E98(int value);
extern int D_00319720[];
extern int func_0D2CF8(int *set);
extern Item *func_022D78(int a, int b);
extern int func_022D30(int x, int y);
extern int func_0B0848(int a);
extern void func_0C9F40(void);

void func_0CA298(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_080E98(0x6B10);
    m = (Menu *)func_0D2CF8(D_00319720);
    if (m == 0) {
        return;
    }
    a = func_022D78(m->f14, -1);
    b = (Item *)func_022D30(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_001E2EAC->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_001F2394 != 0) {
            func_0B0848(8);
            D_001F2394--;
        }
    } else if (keys & 0x20) {
        if (D_001F2394 != lim) {
            func_0B0848(8);
            D_001F2394++;
        }
    } else if (keys & 0x10) {
        if (D_001F2394 != lim) {
            func_0B0848(8);
            D_001F2394 += 10;
        }
    } else if (keys & 0x40) {
        if (D_001F2394 != 0) {
            func_0B0848(8);
            D_001F2394 -= 10;
        }
    } else if (keys & 0x1000) {
        D_001F34A8 = 0;
        func_0B0848(0);
        return;
    }
    if (lim < D_001F2394) {
        D_001F2394 = lim;
    }
    if (D_001F2394 < 0) {
        D_001F2394 = 0;
    }
    if (keys & 0x4000) {
        D_001F2390 = D_001F2394 * cnt;
        func_0B0848(1);
        func_0C9F40();
    }
}
