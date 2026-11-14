/* LEVEL_06:0x14CE20 -- frees the slot the owner names in its table (decrementing the table's active count when the slot was in use, then clearing it), unlinks the record's list node, and finishes with func_017DD8 for the object. */
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
    char pad30[0x3E - 0x30];
    unsigned char slot;
} Owner;

struct Obj {
    char pad00[0x54];
    Owner *owner;
    struct Rec *rec;
};

extern void *memset(void *p, int v, unsigned int n);
extern void func_017DD8(struct P19338 *p);

void func_14CE20(struct Obj *o)
{
    struct Rec *rec;
    char *base;
    Slot *s;
    struct Node *p;
    struct Node *q;

    base = o->owner->table->slots;
    s = (Slot *)(base + o->owner->slot * 0x1C);
    if (s->flags & 1)
        base[0x158]--;
    memset(s, 0, 0x1C);
    rec = o->rec;
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
    func_017DD8((struct P19338 *)o);
}
