/* LEVEL_22:0x11AF48 -- when the object's table entry has a link or a flag word, unlinks the node's list link from the list it sits in. */
typedef struct Link {
    struct Link *next;
    char pad_04[0x10];
    struct Link *prev;
} Link;

typedef struct Node {
    char pad_00[0x7C];
    Link link;
} Node;

typedef struct Ent {
    char pad00[0xC];
    int w0C;
    char pad10[4];
    void *link;
    char pad18[0x1C];
} Ent;

typedef struct Tab {
    char pad00[4];
    Ent *tbl;
} Tab;

typedef struct Obj {
    char pad00[0x40];
    Tab *f40;
    unsigned char b44;
    char pad45[0x13];
    Node *f58;
} Obj;

static __inline__ unsigned char IsLinked(Link *link)
{
    return link->prev != 0;
}

static __inline__ void Unlink(Link *link)
{
    Link *prev = link->prev;

    if (prev != 0) {
        prev->next = link->next;
        if (link->next != 0)
            link->next->prev = link->prev;
        link->prev = 0;
    }
}

void func_11AF48(Obj *o)
{
    Node *node = o->f58;

    if (o->f40->tbl[o->b44].link != 0 || o->f40->tbl[o->b44].w0C != 0) {
        Link *link = &node->link;
        if (IsLinked(link))
            Unlink(link);
    }
}
