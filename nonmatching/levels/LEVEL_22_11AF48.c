/* USA LEVEL_22.REL:0x11AF48, 112-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 23 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    int w14;
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

static __inline__ void Unlink(Link *link)
{
    Link *prev = link->prev;

    if (prev != 0) {
        prev->next = link->next;
        if (link->next != 0) {
            link->next->prev = link->prev;
        }
        link->prev = 0;
    }
}

void func_11AF48(Obj *o)
{
    Ent *e = &o->f40->tbl[o->b44];
    Node *n = o->f58;
    Link *link = &n->link;

    if (e->w14 == 0 && e->w0C == 0) {
        return;
    }
    if (link->prev != 0) {
        Unlink(link);
    }
}
