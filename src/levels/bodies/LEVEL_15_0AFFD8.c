/* LEVEL_15:0x0AFFD8 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_00148C2C;
extern int D_00158114;
extern int D_00158110;
extern int D_00159228;
extern unsigned int func_06C700(int value);
extern int D_002441E0[];
extern int func_0B8A38(int *set);
extern Item *func_01E9D8(int a, int b);
extern int func_01E990(int x, int y);
extern int func_096530(int a);
extern void func_0AFC80(void);

void func_0AFFD8(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_06C700(0x6B10);
    m = (Menu *)func_0B8A38(D_002441E0);
    if (m == 0) {
        return;
    }
    a = func_01E9D8(m->f14, -1);
    b = (Item *)func_01E990(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_00148C2C->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_00158114 != 0) {
            func_096530(8);
            D_00158114--;
        }
    } else if (keys & 0x20) {
        if (D_00158114 != lim) {
            func_096530(8);
            D_00158114++;
        }
    } else if (keys & 0x10) {
        if (D_00158114 != lim) {
            func_096530(8);
            D_00158114 += 10;
        }
    } else if (keys & 0x40) {
        if (D_00158114 != 0) {
            func_096530(8);
            D_00158114 -= 10;
        }
    } else if (keys & 0x1000) {
        D_00159228 = 0;
        func_096530(0);
        return;
    }
    if (lim < D_00158114) {
        D_00158114 = lim;
    }
    if (D_00158114 < 0) {
        D_00158114 = 0;
    }
    if (keys & 0x4000) {
        D_00158110 = D_00158114 * cnt;
        func_096530(1);
        func_0AFC80();
    }
}
