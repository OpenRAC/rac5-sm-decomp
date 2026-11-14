/* LEVEL_06:0x16C380 -- frees the slot the object's record names in its owner's table (decrementing the active count when the slot was in use), unlinks the record and runs the shared release. */
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
    char pad18[0x92 - 0x18];
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
};

extern void *memset(void *p, int v, unsigned int n);
extern void func_017DD8(struct P19338 *p);

void func_16C380(struct Obj *o)
{
    struct Rec *rec;
    struct Rec *r;
    Table *table;
    char *base;
    Slot *s;
    struct Node *p;
    struct Node *q;

    rec = o->rec;
    table = o->owner->table;
    if (table != 0) {
        if (rec->slot != 0xFF) {
            base = table->slots;
            s = (Slot *)(base + rec->slot * 0x1C);
            if (s->flags & 1)
                base[0x158]--;
            memset(s, 0, 0x1C);
            rec->slot = 0xFF;
        }
    }
    r = o->rec;
    p = r->p14;
    if (p != 0) {
        p->w00 = (int)r->next;
        q = r->next;
        if (q == 0) {
            r->p14 = 0;
        } else {
            q->p14 = r->p14;
            r->p14 = 0;
        }
    }
    func_017DD8((struct P19338 *)o);
}
