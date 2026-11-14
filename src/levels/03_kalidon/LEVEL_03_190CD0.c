/* LEVEL_03:0x190CD0 -- unlinks the record's embedded node (moving its link word into the stored neighbour), then releases the owner's attached item. */
struct Node {
    int w00;
    char pad04[0x10];
    struct Node *p14;
};

struct Rec {
    unsigned int w00;
    char pad04[0x10];
    struct Node *p14;
};

struct Owner {
    char pad00[0x154];
    char *item;
};

struct Obj {
    char pad00[0x54];
    struct Owner *owner;
    struct Rec *rec;
};

extern void func_080918(char *record);

void func_190CD0(struct Obj *o)
{
    struct Rec *rec;
    struct Owner *owner;
    struct Node *p;
    struct Node *q;

    rec = o->rec;
    owner = o->owner;
    p = rec->p14;
    if (p != 0) {
        p->w00 = rec->w00;
        q = (struct Node *)rec->w00;
        if (q == 0) {
            rec->p14 = 0;
        } else {
            q->p14 = rec->p14;
            rec->p14 = 0;
        }
    }
    if (owner->item != 0) {
        func_080918(owner->item);
        owner->item = 0;
    }
}
