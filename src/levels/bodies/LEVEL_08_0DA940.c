/* LEVEL_08:0x0DA940 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_0023CB2C;
extern int D_0024C354;
extern int D_0024C350;
extern int D_0024D468;
extern unsigned func_090070(long long value);
extern int D_0037BC20[];
extern int func_0E33C8(int *set);
extern Item *func_024EF0(int a, int b);
extern int func_024EA8(int x, int y);
extern int func_0C0F10(int a);
extern void func_0DA5E8(void);

void func_0DA940(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_090070(0x6B10);
    m = (Menu *)func_0E33C8(D_0037BC20);
    if (m == 0) {
        return;
    }
    a = func_024EF0(m->f14, -1);
    b = (Item *)func_024EA8(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_0023CB2C->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_0024C354 != 0) {
            func_0C0F10(8);
            D_0024C354--;
        }
    } else if (keys & 0x20) {
        if (D_0024C354 != lim) {
            func_0C0F10(8);
            D_0024C354++;
        }
    } else if (keys & 0x10) {
        if (D_0024C354 != lim) {
            func_0C0F10(8);
            D_0024C354 += 10;
        }
    } else if (keys & 0x40) {
        if (D_0024C354 != 0) {
            func_0C0F10(8);
            D_0024C354 -= 10;
        }
    } else if (keys & 0x1000) {
        D_0024D468 = 0;
        func_0C0F10(0);
        return;
    }
    if (lim < D_0024C354) {
        D_0024C354 = lim;
    }
    if (D_0024C354 < 0) {
        D_0024C354 = 0;
    }
    if (keys & 0x4000) {
        D_0024C350 = D_0024C354 * cnt;
        func_0C0F10(1);
        func_0DA5E8();
    }
}
