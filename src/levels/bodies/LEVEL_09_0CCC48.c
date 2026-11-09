/* LEVEL_09:0x0CCC48 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_001DDDAC;
extern int D_001ED294;
extern int D_001ED290;
extern int D_001EE3A8;
extern unsigned func_0849D8(long long value);
extern int D_00314120[];
extern int func_0D56A8(int *set);
extern Item *func_023968(int a, int b);
extern int func_023920(int x, int y);
extern int func_0B32D0(int a);
extern void func_0CC8F0(void);

void func_0CCC48(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_0849D8(0x6B10);
    m = (Menu *)func_0D56A8(D_00314120);
    if (m == 0) {
        return;
    }
    a = func_023968(m->f14, -1);
    b = (Item *)func_023920(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_001DDDAC->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_001ED294 != 0) {
            func_0B32D0(8);
            D_001ED294--;
        }
    } else if (keys & 0x20) {
        if (D_001ED294 != lim) {
            func_0B32D0(8);
            D_001ED294++;
        }
    } else if (keys & 0x10) {
        if (D_001ED294 != lim) {
            func_0B32D0(8);
            D_001ED294 += 10;
        }
    } else if (keys & 0x40) {
        if (D_001ED294 != 0) {
            func_0B32D0(8);
            D_001ED294 -= 10;
        }
    } else if (keys & 0x1000) {
        D_001EE3A8 = 0;
        func_0B32D0(0);
        return;
    }
    if (lim < D_001ED294) {
        D_001ED294 = lim;
    }
    if (D_001ED294 < 0) {
        D_001ED294 = 0;
    }
    if (keys & 0x4000) {
        D_001ED290 = D_001ED294 * cnt;
        func_0B32D0(1);
        func_0CC8F0();
    }
}
