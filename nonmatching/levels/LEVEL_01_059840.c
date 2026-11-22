/* USA LEVEL_01.REL:0x059840, 280-byte candidate (21 November 2026).
 * Measured pinned: 20 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
            e = (*p)->ent;
            if (func_084708(e->h, o)) {
                best = e;
            }
        }
    }
    for (e = D_00238F10; e != 0; e = e->next) {
        if (func_084708(e->h, o)) {
            best = e;
        }
    }
    return best;
}
