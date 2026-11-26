/* LEVEL_03:0x197228 -- when the selected entry carries a link, unlinks the object node from its list. */
typedef struct Node Node;
struct Node {
    Node *next;
    char pad[16];
    Node *previous;
};

typedef struct {
    char pad[0x14];
    void *link;
    char tail[0x1C];
} Entry;

typedef struct {
    char pad[4];
    Entry *entries;
} Header;

typedef struct {
    char pad[0x40];
    Header *header;
    unsigned char selected;
    char gap[0x13];
    Node *node;
    char gap2[8];
    unsigned int flags;
} Obj;

static __inline__ unsigned char IsLinked(Node *n)
{
    return n->previous != 0;
}

static __inline__ void UnlinkNode(Node *n)
{
    if (n->previous) {
        n->previous->next = n->next;
        if (n->next)
            n->next->previous = n->previous;
        n->previous = 0;
    }
}

void func_197228(Obj *o)
{
    Node *n = o->node;

    if (o->header->entries[o->selected].link) {
        if (IsLinked(n))
            UnlinkNode(n);
    }
}
