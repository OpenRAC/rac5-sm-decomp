/* LEVEL_16:0x154FB0 -- frees the slot the object's record names in its owner's table (decrementing the table's active count when the slot was in use, then clearing it), unlinks the record's list node, and finishes with func_017748 for the object. */
struct P19338 {
    char pad0[0x5C];
    int f5C;
};

struct Node {
    int w00;
    char pad04[0x10];
    struct Node *p14;
};

struct Rec {
    struct Node *next;
    char pad04[0x10];
    struct Node *p14;
    char pad18[0x6C - 0x18];
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
    Table *table;
} Owner;

struct Obj {
    char pad00[0x54];
    Owner *owner;
    struct Rec *rec;
};

extern void *memset(void *p, int v, unsigned int n);
extern void func_017748(struct P19338 *p);

void func_154FB0(struct Obj *o)
{
    struct Rec *rec;
    char *base;
    Slot *s;
    struct Node *p;
    struct Node *q;

    rec = o->rec;
    base = o->owner->table->slots;
    s = (Slot *)(base + rec->slot * 0x1C);
    if (s->flags & 1)
        base[0x408]--;
    memset(s, 0, 0x1C);
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
    func_017748((struct P19338 *)o);
}
