/* USA LEVEL_02:1D4028, 244-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 244 bytes: 15 differing words; first difference +0x68. No matching credit.
 * Remaining issue: a Target *t local (loaded once, kept in a0 for the call) plus a for loop now
 * give the retail registers (0xFF hoisted in s2, rec register reused for the entry pointer) and
 * length; left: the for loop keeps an entry jump to its test and the match stores come out b16,
 * b14, w04, owner, while retail has a bottom-tested loop with the match block in line; every do-
 * while form moves the match block out of line (55 w)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_02:0x1D4028 -- releases the object: frees the slot its record names in the owner's table (decrementing the active count when it was in use), clears the matching eight-entry back-reference of the linked object, unlinks the object's list node and finishes with func_019FB8. */
struct Node {
    int w00;
    char pad04[0x10];
    struct Node *p14;
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

typedef struct Obj Obj;

typedef struct {
    Obj *owner;
    int w04;
    char pad08[0xC];
    unsigned char b14;
    char pad15;
    unsigned char b16;
    char pad17;
} Entry;

typedef struct {
    char pad00[0x54];
    Entry *entries;
} Target;

struct Rec {
    char pad00[0x34];
    Target *target;
    Table *table;
    char pad3C[0x4A - 0x3C];
    unsigned char slot;
};

struct Obj {
    char pad00[0x54];
    struct Rec *rec;
    struct Node *node;
};

extern void *memset(void *p, int v, unsigned int n);
extern void func_167A78(Target *t, unsigned int index);
extern void func_019FB8(Obj *o);

void func_1D4028(Obj *o)
{
    struct Rec *rec;
    char *base;
    Slot *s;
    struct Node *n;
    struct Node *p;
    struct Node *q;
    Entry *e;
    unsigned int i;
    Target *t;

    rec = o->rec;
    base = rec->table->slots;
    s = (Slot *)(base + rec->slot * 0x1C);
    if (s->flags & 1)
        base[0x158]--;
    memset(s, 0, 0x1C);
    t = rec->target;
    e = t->entries;
    for (i = 0; i < 8; i++, e++) {
        if (e->owner == o) {
            func_167A78(t, i & 0xFF);
            e->b16 = 0xFF;
            e->w04 = 0;
            e->owner = 0;
            e->b14 = 0;
            break;
        }
    }
    n = o->node;
    p = n->p14;
    if (p != 0) {
        p->w00 = n->w00;
        q = (struct Node *)n->w00;
        if (q == 0) {
            n->p14 = 0;
        } else {
            q->p14 = n->p14;
            n->p14 = 0;
        }
    }
    func_019FB8(o);
}
