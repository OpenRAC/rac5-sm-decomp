/* USA LEVEL_01.REL:0x07C8C0, 296-byte candidate (21 November 2026).
 * Measured pinned -mno-check-zero-division: 2 differing words; first
 * difference at 0xE0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Class {
    char pad00[0x30];
    unsigned int div_30;
    char pad34[4];
    float *tbl_38;
    char pad3C[0x18];
    int (*fn_54)(void *o);
} Class;

typedef struct Info {
    char pad00[0x10];
    Class *cls_10;
    char pad14[0x1C];
    unsigned int div_30;
} Info;

typedef struct Obj {
    char pad00[0x40];
    Info *info_40;
} Obj;

extern int D_0021A7F0;

extern int func_018130(void);
extern int func_1EB278(float f);
extern int func_07C820(void *o, int *a1);

int func_07C8C0(Obj *o)
{
    Class *c;
    float *tbl;
    unsigned int n;
    unsigned int q;
    unsigned int r;
    unsigned int lv;
    int w;

    c = o->info_40->cls_10;
    tbl = c->tbl_38;
    if (c->fn_54 != 0) {
        return c->fn_54(o);
    }
    if (tbl == 0) {
        return 0;
    }
    n = func_018130();
    q = func_1EB278((float)n * tbl[D_0021A7F0]);
    if (n != 0) {
        r = q / o->info_40->div_30;
    } else {
        r = 0;
    }
    lv = func_07C820(o, 0);
    if (lv < 12) {
        w = 0x100 - (((lv / 3) & 0xFF) << 6);
    } else {
        w = 13;
    }
    return (int)(r * w + 0x80) >> 8;
}
