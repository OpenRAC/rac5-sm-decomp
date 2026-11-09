/* LEVEL_22:0x0BDED8 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_0015332C;
extern int D_00162814;
extern int D_00162810;
extern int D_00163928;
extern unsigned func_079438(long long value);
extern int D_00282560[];
extern int func_0C6938(int *set);
extern Item *func_01F4A8(int a, int b);
extern int func_01F460(int x, int y);
extern int func_0A4570(int a);
extern void func_0BDB80(void);

void func_0BDED8(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_079438(0x6B10);
    m = (Menu *)func_0C6938(D_00282560);
    if (m == 0) {
        return;
    }
    a = func_01F4A8(m->f14, -1);
    b = (Item *)func_01F460(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_0015332C->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_00162814 != 0) {
            func_0A4570(8);
            D_00162814--;
        }
    } else if (keys & 0x20) {
        if (D_00162814 != lim) {
            func_0A4570(8);
            D_00162814++;
        }
    } else if (keys & 0x10) {
        if (D_00162814 != lim) {
            func_0A4570(8);
            D_00162814 += 10;
        }
    } else if (keys & 0x40) {
        if (D_00162814 != 0) {
            func_0A4570(8);
            D_00162814 -= 10;
        }
    } else if (keys & 0x1000) {
        D_00163928 = 0;
        func_0A4570(0);
        return;
    }
    if (lim < D_00162814) {
        D_00162814 = lim;
    }
    if (D_00162814 < 0) {
        D_00162814 = 0;
    }
    if (keys & 0x4000) {
        D_00162810 = D_00162814 * cnt;
        func_0A4570(1);
        func_0BDB80();
    }
}
