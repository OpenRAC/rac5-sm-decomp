/* LEVEL_17:0x0BE5D0 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_001950B4;
extern int D_001A4944;
extern int D_001A4940;
extern int D_001A5A58;
extern unsigned func_07A030(long long value);
extern int D_0026BD20[];
extern int func_0C7030(int *set);
extern Item *func_021A90(int a, int b);
extern int func_021A48(int x, int y);
extern int func_0A4590(int a);
extern void func_0BE278(void);

void func_0BE5D0(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_07A030(0x6B10);
    m = (Menu *)func_0C7030(D_0026BD20);
    if (m == 0) {
        return;
    }
    a = func_021A90(m->f14, -1);
    b = (Item *)func_021A48(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_001950B4->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_001A4944 != 0) {
            func_0A4590(8);
            D_001A4944--;
        }
    } else if (keys & 0x20) {
        if (D_001A4944 != lim) {
            func_0A4590(8);
            D_001A4944++;
        }
    } else if (keys & 0x10) {
        if (D_001A4944 != lim) {
            func_0A4590(8);
            D_001A4944 += 10;
        }
    } else if (keys & 0x40) {
        if (D_001A4944 != 0) {
            func_0A4590(8);
            D_001A4944 -= 10;
        }
    } else if (keys & 0x1000) {
        D_001A5A58 = 0;
        func_0A4590(0);
        return;
    }
    if (lim < D_001A4944) {
        D_001A4944 = lim;
    }
    if (D_001A4944 < 0) {
        D_001A4944 = 0;
    }
    if (keys & 0x4000) {
        D_001A4940 = D_001A4944 * cnt;
        func_0A4590(1);
        func_0BE278();
    }
}
