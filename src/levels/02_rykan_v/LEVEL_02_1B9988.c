/* LEVEL_02:0x1B9988 -- placement copy of LEVEL_01_19EFC0.c: tears down the object's record: runs func_073880 on its three 0x3C-byte sub-records, sets a flag bit in the owner's 64-bit word, decrements the live-record counter, unlinks the record's list node, and flags the record's linked object through func_082F58. */
typedef struct Link {
    struct Link *next;
    char pad04[0x10];
    struct Link *prev;
} Link;

typedef struct {
    char pad00[0x960];
    long long flags;
} Owner;

typedef struct {
    char data[0x3C];
} Sub;

typedef struct {
    Owner *owner;
    Link link;
    char pad1C[4];
    char *linked;
    char pad24[0xD4 - 0x24];
    Sub subs[3];
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
} Obj;

extern int D_0021DAEC[1];
extern void func_073880(char *record);
extern void func_082F58(char *obj, int on);

void func_1B9988(Obj *o)
{
    Rec *rec;
    Link *n;
    Link *p;
    Link *q;
    unsigned int i;

    rec = o->rec;
    for (i = 0; i < 3; i++)
        func_073880((char *)&rec->subs[i]);
    rec->owner->flags |= 0x40000000000LL;
    D_0021DAEC[0]--;
    n = &rec->link;
    p = n->prev;
    if (p != 0) {
        p->next = n->next;
        q = n->next;
        if (q == 0) {
            n->prev = 0;
        } else {
            q->prev = n->prev;
            n->prev = 0;
        }
    }
    if (rec->linked != 0)
        func_082F58(rec->linked, 1);
}
