/* USA LEVEL_01:059840, 280-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 280 bytes: 16 differing words; first difference +0x0. No matching credit.
 * Remaining issue: The unused frame array or unrelated pointer-type reuse was removed. Recover
 * the original frame ownership or aliasing from caller and field evidence before retrying.
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_01:0x059840 -- gathers candidate entries around a position and returns the last one accepted by a test. */
struct Ent {
    void *h;
    int pad_04;
    struct Ent *next;
};
struct Item {
    char pad_00[2];
    unsigned char kind;
    char pad_03;
    struct Ent *ent;
};
struct Rec { char pad_00[0x68]; };

extern struct Rec D_0022F6F8[2];
extern struct Item **D_0022F7C8;
extern struct Ent *D_00238F10;
extern int func_095AA0(struct Item **list, struct Rec *r, float *o, float *o2, int a, int b);
extern int func_084708(void *h, float *o);

static __inline__ void Pick(struct Ent **best, struct Ent *e, float *o)
{
    if (func_084708(e->h, o)) {
        *best = e;
    }
}

struct Ent *func_059840(float *o)
{
    struct Item **list;
    struct Item **p;
    struct Item **end;
    struct Item **base;
    int n;
    struct Rec *r;
    struct Ent *best;
    struct Ent *e;

    best = 0;
    list = D_0022F7C8;
    r = D_0022F6F8;
    do {
        list += func_095AA0(list, r, o, o, 0x1FFF, 0x1430);
        r++;
    } while (r < D_0022F6F8 + 2);
    base = D_0022F7C8;
    n = list - base;
    p = base;
    end = p + n;
    for (; p != end; p++) {
        if ((*p)->kind == 7) {
            Pick(&best, (*p)->ent, o);
        }
    }
    for (e = D_00238F10; e != 0; e = e->next) {
        Pick(&best, e, o);
    }
    return best;
}
