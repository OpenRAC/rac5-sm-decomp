/* LEVEL_24:0x0C92D8 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_001C4C2C;
extern int D_001D4114;
extern int D_001D4110;
extern int D_001D5228;
extern unsigned int func_0812C0(int value);
extern int D_002F8860[];
extern int func_0D1D60(int *set);
extern Item *func_022448(int a, int b);
extern int func_022400(int x, int y);
extern int func_0AF8B0(int a);
extern void func_0C8F80(void);

void func_0C92D8(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_0812C0(0x6B10);
    m = (Menu *)func_0D1D60(D_002F8860);
    if (m == 0) {
        return;
    }
    a = func_022448(m->f14, -1);
    b = (Item *)func_022400(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_001C4C2C->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_001D4114 != 0) {
            func_0AF8B0(8);
            D_001D4114--;
        }
    } else if (keys & 0x20) {
        if (D_001D4114 != lim) {
            func_0AF8B0(8);
            D_001D4114++;
        }
    } else if (keys & 0x10) {
        if (D_001D4114 != lim) {
            func_0AF8B0(8);
            D_001D4114 += 10;
        }
    } else if (keys & 0x40) {
        if (D_001D4114 != 0) {
            func_0AF8B0(8);
            D_001D4114 -= 10;
        }
    } else if (keys & 0x1000) {
        D_001D5228 = 0;
        func_0AF8B0(0);
        return;
    }
    if (lim < D_001D4114) {
        D_001D4114 = lim;
    }
    if (D_001D4114 < 0) {
        D_001D4114 = 0;
    }
    if (keys & 0x4000) {
        D_001D4110 = D_001D4114 * cnt;
        func_0AF8B0(1);
        func_0C8F80();
    }
}
