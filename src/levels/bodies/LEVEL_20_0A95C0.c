/* LEVEL_20:0x0A95C0 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_00104194;
extern int D_00113A24;
extern int D_00113A20;
extern int D_00114B38;
extern unsigned func_067228(long long value);
extern int D_0019E260[];
extern int func_0B2020(int *set);
extern Item *func_01EE10(int a, int b);
extern int func_01EDC8(int x, int y);
extern int func_08F6B0(int a);
extern void func_0A9268(void);

void func_0A95C0(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_067228(0x6B10);
    m = (Menu *)func_0B2020(D_0019E260);
    if (m == 0) {
        return;
    }
    a = func_01EE10(m->f14, -1);
    b = (Item *)func_01EDC8(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_00104194->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_00113A24 != 0) {
            func_08F6B0(8);
            D_00113A24--;
        }
    } else if (keys & 0x20) {
        if (D_00113A24 != lim) {
            func_08F6B0(8);
            D_00113A24++;
        }
    } else if (keys & 0x10) {
        if (D_00113A24 != lim) {
            func_08F6B0(8);
            D_00113A24 += 10;
        }
    } else if (keys & 0x40) {
        if (D_00113A24 != 0) {
            func_08F6B0(8);
            D_00113A24 -= 10;
        }
    } else if (keys & 0x1000) {
        D_00114B38 = 0;
        func_08F6B0(0);
        return;
    }
    if (lim < D_00113A24) {
        D_00113A24 = lim;
    }
    if (D_00113A24 < 0) {
        D_00113A24 = 0;
    }
    if (keys & 0x4000) {
        D_00113A20 = D_00113A24 * cnt;
        func_08F6B0(1);
        func_0A9268();
    }
}
