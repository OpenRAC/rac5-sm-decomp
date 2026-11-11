/* LEVEL_07:0x0D19F8 -- placement copy of LEVEL_01_0CF998.c: handles the d-pad and buttons of a count selector menu. */
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

extern Cfg *D_002082AC;
extern int D_00217794;
extern int D_00217790;
extern int D_002188A8;
extern unsigned int func_08A0F0(int value);
extern int D_003422A0[];
extern int func_0DA458(int *set);
extern Item *func_024C38(int a, int b);
extern int func_024BF0(int x, int y);
extern int func_0B8080(int a);
extern void func_0D16A0(void);

void func_0D19F8(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_08A0F0(0x6B10);
    m = (Menu *)func_0DA458(D_003422A0);
    if (m == 0) {
        return;
    }
    a = func_024C38(m->f14, -1);
    b = (Item *)func_024BF0(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_002082AC->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_00217794 != 0) {
            func_0B8080(8);
            D_00217794--;
        }
    } else if (keys & 0x20) {
        if (D_00217794 != lim) {
            func_0B8080(8);
            D_00217794++;
        }
    } else if (keys & 0x10) {
        if (D_00217794 != lim) {
            func_0B8080(8);
            D_00217794 += 10;
        }
    } else if (keys & 0x40) {
        if (D_00217794 != 0) {
            func_0B8080(8);
            D_00217794 -= 10;
        }
    } else if (keys & 0x1000) {
        D_002188A8 = 0;
        func_0B8080(0);
        return;
    }
    if (lim < D_00217794) {
        D_00217794 = lim;
    }
    if (D_00217794 < 0) {
        D_00217794 = 0;
    }
    if (keys & 0x4000) {
        D_00217790 = D_00217794 * cnt;
        func_0B8080(1);
        func_0D16A0();
    }
}
