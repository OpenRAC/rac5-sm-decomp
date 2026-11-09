/* LEVEL_10:0x0D0DD8 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_001FCFAC;
extern int D_0020C494;
extern int D_0020C490;
extern int D_0020D5A8;
extern unsigned func_088388(long long value);
extern int D_00335DA0[];
extern int func_0D9838(int *set);
extern Item *func_023FD8(int a, int b);
extern int func_023F90(int x, int y);
extern int func_0B71F8(int a);
extern void func_0D0A80(void);

void func_0D0DD8(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_088388(0x6B10);
    m = (Menu *)func_0D9838(D_00335DA0);
    if (m == 0) {
        return;
    }
    a = func_023FD8(m->f14, -1);
    b = (Item *)func_023F90(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_001FCFAC->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_0020C494 != 0) {
            func_0B71F8(8);
            D_0020C494--;
        }
    } else if (keys & 0x20) {
        if (D_0020C494 != lim) {
            func_0B71F8(8);
            D_0020C494++;
        }
    } else if (keys & 0x10) {
        if (D_0020C494 != lim) {
            func_0B71F8(8);
            D_0020C494 += 10;
        }
    } else if (keys & 0x40) {
        if (D_0020C494 != 0) {
            func_0B71F8(8);
            D_0020C494 -= 10;
        }
    } else if (keys & 0x1000) {
        D_0020D5A8 = 0;
        func_0B71F8(0);
        return;
    }
    if (lim < D_0020C494) {
        D_0020C494 = lim;
    }
    if (D_0020C494 < 0) {
        D_0020C494 = 0;
    }
    if (keys & 0x4000) {
        D_0020C490 = D_0020C494 * cnt;
        func_0B71F8(1);
        func_0D0A80();
    }
}
