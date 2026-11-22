/* USA LEVEL_02.REL:0x1D20B8, 288-byte candidate (21 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x50.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Rec1D20B8 {
    char pad0[0x20];
    unsigned int hash;
};

struct Tbl1D20B8 {
    char pad0[4];
    struct Rec1D20B8 *recs;
};

struct Held1D20B8 {
    char pad0[0x160];
    int cur;
    int src;
    int old;
};

struct Obj1D20B8 {
    char pad0[0x40];
    struct Tbl1D20B8 *tbl;
    unsigned char kind;
    unsigned char state;
    char pad46[0x12];
    struct Held1D20B8 *held;
};

extern void func_082F58(int h, int a);
extern int func_192E80(int a);
extern int func_165D28(int a);
extern int func_184E88(int a);
extern int func_13C1C0(int a);
extern void func_1D2468(struct Obj1D20B8 *o, int a, int b);

void func_1D20B8(struct Obj1D20B8 *o)
{
    struct Held1D20B8 *h;

    if ((unsigned int)(o->state - 8) < 2) {
        h = o->held;
        if (h->old != 0) {
            func_082F58(h->old, 1);
            h->old = 0;
        }
        switch (((struct Rec1D20B8 *)((char *)o->tbl->recs + o->kind * 0x34))->hash) {
        case 0x9B63BF4D:
            h->cur = func_192E80(h->src);
            break;
        case 0x5A45D019:
            h->cur = func_165D28(h->src);
            break;
        case 0xD057AC67:
            h->cur = func_184E88(h->src);
            break;
        case 0x71E93128:
        case 0x1585F42C:
            h->cur = func_13C1C0(h->src);
            break;
        }
        func_1D2468(o, o->state, 10);
    }
}
