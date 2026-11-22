/* USA LEVEL_16.REL:0x1390C8, 304-byte candidate (21 November 2026).
 * Measured pinned: 15 differing words; first difference at 0x84.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Vt1390C8 {
    char pad00[0x20];
    void (*fn20)(void *t, int a, int b, void *pos, int c, void *o, float f);
};

struct Tgt1390C8 {
    char pad00[0x40];
    struct Vt1390C8 *vt;
};

struct St1390C8 {
    char pad00[0x50];
    int cnt50;
    char pad54[0x08];
    struct Tgt1390C8 *tgt;
    char pad60[0x12];
    unsigned char flag72;
};

struct Obj1390C8 {
    char pad00[0x30];
    char pos30[0x15];
    unsigned char b45;
    char pad46[0x12];
    struct St1390C8 *st;
};

struct Row1390C8 {
    char pad00[0x10];
    float f10;
    char pad14[0x0C];
};

extern int D_001D04A0;
extern struct Row1390C8 D_001CECD0[];

extern float func_06FB28(void);
extern int func_013D40(void *o, void *t, float a, float b, float c);
extern int func_06FB50(void *o, int a);
extern int func_139988(void *o);
extern void func_1394D0(void *o, int b, unsigned char kind);

void func_1390C8(struct Obj1390C8 *o)
{
    struct St1390C8 *st;
    int idx;
    int r;

    st = o->st;
    st->cnt50 = st->cnt50 + 1;
    if (st->flag72 == 0) {
        if (func_06FB28() > 0.8333333f) {
            if (func_013D40(o, st->tgt, 1.2f, 4.0f, 0.8660254f) != 0) {
                idx = D_001D04A0 - 0x10;
                st->tgt->vt->fn20(st->tgt, 2, 1, o->pos30, 0, o, D_001CECD0[idx].f10);
                st->flag72 = 1;
            }
        }
    }
    if (func_06FB50(o, 0) != 0) {
        r = func_139988(o);
        if (r == 0xD) {
            func_1394D0(o, o->b45, 0xE);
        } else {
            func_1394D0(o, o->b45, r);
        }
    }
}
