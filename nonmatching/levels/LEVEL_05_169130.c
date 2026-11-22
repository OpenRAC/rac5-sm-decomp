/* USA LEVEL_05.REL:0x169130, 268-byte candidate (21 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x34.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct P19338;

struct Node {
    int w00;
    char pad04[0x10];
    struct Node *p14;
};

struct Rec {
    struct Node *next;
    char pad04[0x10];
    struct Node *p14;
    char pad18[0x90 - 0x18];
    unsigned char slot;
};

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
} Owner;

struct Obj {
    char pad00[0x54];
    Owner *owner;
    struct Rec *rec;
    char pad5c[8];
    unsigned int flags;
};

extern void *memset(void *p, int v, unsigned int n);
extern void func_15FDA0(Table *t);
extern void func_018BF8(struct Obj *o);

void func_169130(struct Obj *o)
{
    struct Rec *rec;
    Owner *owner;
    Table *table;
    char *base;
    Slot *s;
    struct Node *p;
    struct Node *q;

    rec = o->rec;
    owner = o->owner;
    if (rec->slot != 0xFF) {
        table = owner->table;
        s = (Slot *)(table->slots + rec->slot * 0x1C);
        if (s->flags & 1) {
            func_15FDA0(table);
        }
        base = owner->table->slots;
        s = (Slot *)(base + rec->slot * 0x1C);
        if (s->flags & 1) {
            base[0x158]--;
        }
        memset(s, 0, 0x1C);
        rec->slot = 0xFF;
    }
    p = rec->p14;
    if (p != 0) {
        p->w00 = (int)rec->next;
        q = rec->next;
        if (q == 0) {
            rec->p14 = 0;
        } else {
            q->p14 = rec->p14;
            rec->p14 = 0;
        }
    }
    if ((o->flags & 0x200000) == 0) {
        func_018BF8(o);
    }
}
