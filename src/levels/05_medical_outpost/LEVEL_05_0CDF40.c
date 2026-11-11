/* LEVEL_05:0x0CDF40 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_001E332C;
extern int D_001F2814;
extern int D_001F2810;
extern int D_001F3928;
extern unsigned int func_085978(int value);
extern int D_00318860[];
extern int func_0D69A0(int *set);
extern Item *func_023608(int a, int b);
extern int func_0235C0(int x, int y);
extern int func_0B45C8(int a);
extern void func_0CDBE8(void);

void func_0CDF40(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_085978(0x6B10);
    m = (Menu *)func_0D69A0(D_00318860);
    if (m == 0) {
        return;
    }
    a = func_023608(m->f14, -1);
    b = (Item *)func_0235C0(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_001E332C->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_001F2814 != 0) {
            func_0B45C8(8);
            D_001F2814--;
        }
    } else if (keys & 0x20) {
        if (D_001F2814 != lim) {
            func_0B45C8(8);
            D_001F2814++;
        }
    } else if (keys & 0x10) {
        if (D_001F2814 != lim) {
            func_0B45C8(8);
            D_001F2814 += 10;
        }
    } else if (keys & 0x40) {
        if (D_001F2814 != 0) {
            func_0B45C8(8);
            D_001F2814 -= 10;
        }
    } else if (keys & 0x1000) {
        D_001F3928 = 0;
        func_0B45C8(0);
        return;
    }
    if (lim < D_001F2814) {
        D_001F2814 = lim;
    }
    if (D_001F2814 < 0) {
        D_001F2814 = 0;
    }
    if (keys & 0x4000) {
        D_001F2810 = D_001F2814 * cnt;
        func_0B45C8(1);
        func_0CDBE8();
    }
}
