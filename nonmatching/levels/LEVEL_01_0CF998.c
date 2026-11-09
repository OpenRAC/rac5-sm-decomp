/* LEVEL_01.REL:0x0CF998: reviewed 448-byte candidate, held for ABI review.
 * Handles the d-pad and buttons of a count selector menu.
 * pinned C with gnu-ee-trial links 448/448 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_088020 returning int with (int), but the accepted
 * LEVEL_01_088020.c defines it returning int with (long long).
 * It declares func_0D83F8 returning pointer with (pointer), but the accepted
 * LEVEL_01_0D83F8.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern Cfg *D_001F3FAC;
extern int D_00203494;
extern int D_00203490;
extern int D_002045A8;
extern unsigned func_088020(int a);
extern char D_0032C9A0[];
extern Menu *func_0D83F8(char *a);
extern Item *func_024670(int a, int b);
extern Item *func_024628(int a, int b);
extern int func_0B6020(int a);
extern void func_0CF640(void);

void func_0CF998(void)
{
    unsigned keys;
    Menu *m;
    Item *a;
    Item *b;
    unsigned cnt;
    int lim;
    int d;

    keys = func_088020(0x6B10);
    m = func_0D83F8(D_0032C9A0);
    if (m == 0) {
        return;
    }
    a = func_024670(m->f14, -1);
    b = func_024628(m->f14, -1);
    if (a == 0 || b == 0) {
        return;
    }
    cnt = m->fC;
    lim = D_001F3FAC->f1C68 / cnt;
    d = a->f38 - b->f40;
    if (d < lim) {
        lim = d;
    }
    if (keys & 0x80) {
        if (D_00203494 != 0) {
            func_0B6020(8);
            D_00203494--;
        }
    } else if (keys & 0x20) {
        if (D_00203494 != lim) {
            func_0B6020(8);
            D_00203494++;
        }
    } else if (keys & 0x10) {
        if (D_00203494 != lim) {
            func_0B6020(8);
            D_00203494 += 10;
        }
    } else if (keys & 0x40) {
        if (D_00203494 != 0) {
            func_0B6020(8);
            D_00203494 -= 10;
        }
    } else if (keys & 0x1000) {
        D_002045A8 = 0;
        func_0B6020(0);
        return;
    }
    if (lim < D_00203494) {
        D_00203494 = lim;
    }
    if (D_00203494 < 0) {
        D_00203494 = 0;
    }
    if (keys & 0x4000) {
        D_00203490 = D_00203494 * cnt;
        func_0B6020(1);
        func_0CF640();
    }
}
