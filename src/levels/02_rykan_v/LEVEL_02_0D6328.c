/* LEVEL_02:0x0D6328 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_00208C2C;
extern int D_00218454;
extern int D_00218450;
extern int D_00219568;
extern unsigned int func_08E950(int value);
extern int D_00343EA0[];
extern int func_0DED88(int *set);
extern Item *func_024FD0(int a, int b);
extern int func_024F88(int x, int y);
extern int func_0BC930(int a);
extern void func_0D5FD0(void);

void func_0D6328(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_08E950(0x6B10);
    m = (Menu *)func_0DED88(D_00343EA0);
    if (m == 0) {
        return;
    }
    a = func_024FD0(m->f14, -1);
    b = (Item *)func_024F88(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_00208C2C->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_00218454 != 0) {
            func_0BC930(8);
            D_00218454--;
        }
    } else if (keys & 0x20) {
        if (D_00218454 != lim) {
            func_0BC930(8);
            D_00218454++;
        }
    } else if (keys & 0x10) {
        if (D_00218454 != lim) {
            func_0BC930(8);
            D_00218454 += 10;
        }
    } else if (keys & 0x40) {
        if (D_00218454 != 0) {
            func_0BC930(8);
            D_00218454 -= 10;
        }
    } else if (keys & 0x1000) {
        D_00219568 = 0;
        func_0BC930(0);
        return;
    }
    if (lim < D_00218454) {
        D_00218454 = lim;
    }
    if (D_00218454 < 0) {
        D_00218454 = 0;
    }
    if (keys & 0x4000) {
        D_00218450 = D_00218454 * cnt;
        func_0BC930(1);
        func_0D5FD0();
    }
}
