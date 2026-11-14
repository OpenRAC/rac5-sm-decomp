/* USA LEVEL_22.REL:0x10DDC8, 100-byte candidate (14 November 2026).
 * Measured pinned: 18 differing words; first difference at 32.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    Node *node;

    node = o->node;
    if (o->model->entries[o->b44].link != 0) {
        if (node->link.prev != 0)
            Unlink(&node->link);
    }
}
