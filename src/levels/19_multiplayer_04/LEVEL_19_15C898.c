/* LEVEL_19:0x15C898 -- removes the object from the global singly linked list and unlinks its record from the neighbouring records. */
struct Obj;

typedef struct Rec {
    struct Rec *next;
    char pad4[0x10];
    struct Rec *prev;
    char pad18[0xC];
    struct Obj *link;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern Obj *D_001BF01C;

void func_15C898(Obj *o)
{
    Rec *rec = o->rec;
    Obj *n;
    Rec *pr;
    Rec *t;

    if (D_001BF01C == o) {
        D_001BF01C = rec->link;
    } else {
        for (n = D_001BF01C; n != 0;) {
            pr = n->rec;
            n = pr->link;
            if (n == o) {
                pr->link = rec->link;
                break;
            }
        }
    }
    t = rec->prev;
    if (t != 0) {
        t->next = rec->next;
        t = rec->next;
        if (t != 0) {
            t->prev = rec->prev;
        }
        rec->prev = 0;
    }
}
