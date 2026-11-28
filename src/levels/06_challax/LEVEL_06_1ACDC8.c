/* LEVEL_06:0x1ACDC8 -- releases the object's slot record in the owner's table when it has one, unlinks the object's node from its chain and runs the cleanup helper. */
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
    char pad18[0x5D - 0x18];
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
extern void func_017DD8(struct P19338 *p);

void func_1ACDC8(struct Obj *o)
{
    Owner *owner;
    struct Rec *rec;
    char *base;
    Slot *s;
    struct Node *p;
    struct Node *q;

    owner = o->owner;
    rec = o->rec;
    if (rec->slot != 0xFF) {
        base = owner->table->slots;
        s = (Slot *)(base + rec->slot * 0x1C);
        if (s->flags & 1)
            base[0x158]--;
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
    func_017DD8((struct P19338 *)o);
}
