/* LEVEL_04:0x0D5230 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_0020D12C;
extern int D_0021C954;
extern int D_0021C950;
extern int D_0021DA68;
extern unsigned func_08B2B8(long long value);
extern int D_003471A0[];
extern int func_0DDCB8(int *set);
extern Item *func_0242F0(int a, int b);
extern int func_0242A8(int x, int y);
extern int func_0BB828(int a);
extern void func_0D4ED8(void);

void func_0D5230(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_08B2B8(0x6B10);
    m = (Menu *)func_0DDCB8(D_003471A0);
    if (m == 0) {
        return;
    }
    a = func_0242F0(m->f14, -1);
    b = (Item *)func_0242A8(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_0020D12C->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_0021C954 != 0) {
            func_0BB828(8);
            D_0021C954--;
        }
    } else if (keys & 0x20) {
        if (D_0021C954 != lim) {
            func_0BB828(8);
            D_0021C954++;
        }
    } else if (keys & 0x10) {
        if (D_0021C954 != lim) {
            func_0BB828(8);
            D_0021C954 += 10;
        }
    } else if (keys & 0x40) {
        if (D_0021C954 != 0) {
            func_0BB828(8);
            D_0021C954 -= 10;
        }
    } else if (keys & 0x1000) {
        D_0021DA68 = 0;
        func_0BB828(0);
        return;
    }
    if (lim < D_0021C954) {
        D_0021C954 = lim;
    }
    if (D_0021C954 < 0) {
        D_0021C954 = 0;
    }
    if (keys & 0x4000) {
        D_0021C950 = D_0021C954 * cnt;
        func_0BB828(1);
        func_0D4ED8();
    }
}
