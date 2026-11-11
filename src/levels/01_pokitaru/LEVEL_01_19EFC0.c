/* LEVEL_01:0x19EFC0 -- tears down the object's record: runs func_06E400 on its three 0x3C-byte sub-records, sets a flag bit in the owner's 64-bit word, decrements the live-record counter, unlinks the record's list node, and flags the record's linked object through func_07C670. */
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

extern int D_00208A94[1];
extern void func_06E400(char *record);
extern void func_07C670(char *obj, int on);

void func_19EFC0(Obj *o)
{
    Rec *rec;
    Link *n;
    Link *p;
    Link *q;
    unsigned int i;

    rec = o->rec;
    for (i = 0; i < 3; i++)
        func_06E400((char *)&rec->subs[i]);
    rec->owner->flags |= 0x40000000000LL;
    D_00208A94[0]--;
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
        func_07C670(rec->linked, 1);
}
