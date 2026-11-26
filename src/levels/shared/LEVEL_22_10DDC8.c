/* LEVEL_22:0x10DDC8 -- when the current table entry has a link, unlinks the object's list node from its list. */
typedef struct Link {
    struct Link *next;
    char pad_04[0x10];
    struct Link *prev;
} Link;

typedef struct Entry {
    char pad_00[0x14];
    void *link;
    char pad_18[0x1C];
} Entry;

typedef struct Model {
    char pad_00[4];
    Entry *entries;
} Model;

typedef struct Node {
    char pad_00[0x24];
    Link link;
} Node;

typedef struct Obj {
    char pad_00[0x40];
    Model *model;
    unsigned char b44;
    char pad_45[0x13];
    Node *node;
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

void func_10DDC8(Obj *o)
{
    Node *node = o->node;

    if (o->model->entries[o->b44].link != 0) {
        Link *link = &node->link;
        if (IsLinked(link))
            Unlink(link);
    }
}
