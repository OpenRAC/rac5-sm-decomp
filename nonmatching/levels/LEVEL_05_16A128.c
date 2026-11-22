/* USA LEVEL_05.REL:0x16A128, 292-byte candidate (21 November 2026).
 * Measured pinned: 17 differing words; first difference at 0x38.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x18];
    unsigned char flags;
    char pad19[0x1C - 0x19];
} Slot;

typedef struct {
    char pad00[0x58];
    char *slots;
} Table;

typedef struct {
    char pad00[0x2C];
    Table *table;
    char pad30[4];
    void *link_34;
} Owner;

struct Rec {
    char pad00[0x0C];
    unsigned short flags_0C;
    char pad0E[0x90 - 0x0E];
    unsigned char slot;
    char pad91[3];
    unsigned char arg_94;
};

struct Link {
    char pad00[0xDC];
    int w_DC;
};

struct Obj {
    char pad00[0x48];
    struct Link *link_48;
    char pad4C[8];
    Owner *owner;
    struct Rec *rec;
    char pad5C[8];
    int flags_64;
};

extern void *memset(void *p, int v, unsigned int n);
extern void func_15FDA0(Table *t);
extern void func_073400(void *key);
extern void func_074060(void *key);
extern void func_162870(void *a, int b);
extern void func_079CF8(struct Obj *o, int mode);

void func_16A128(struct Obj *o)
{
    Owner *ow;
    struct Rec *rec;
    char *base;
    Slot *s;
    Table *t;
    int idx;

    ow = o->owner;
    rec = o->rec;
    if (ow->link_34 != 0) {
        if (rec->slot != 0xFF) {
            idx = rec->slot;
            t = ow->table;
            if (((Slot *)(t->slots + idx * 0x1C))->flags & 1)
                func_15FDA0(t);
            base = ow->table->slots;
            s = (Slot *)(base + rec->slot * 0x1C);
            if (s->flags & 1)
                base[0x158]--;
            memset(s, 0, 0x1C);
            rec->slot = 0xFF;
        }
        o->flags_64 &= ~0x10;
        o->flags_64 &= ~0x20;
        func_073400(o);
        func_074060(o);
        o->link_48->w_DC = 0;
        func_162870(ow->link_34, rec->arg_94);
        rec->flags_0C |= 8;
    } else {
        func_079CF8(o, 1);
    }
}
