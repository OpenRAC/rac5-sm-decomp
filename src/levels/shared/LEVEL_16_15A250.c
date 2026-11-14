/* LEVEL_16:0x15A250 -- clears the back link of the target of every flagged 0x80-byte record of an object's record table. */
typedef struct Rec Rec;

typedef struct {
    char pad0[0x18];
    int back;
} Tgt;

struct Rec {
    char pad0[0x58];
    Tgt *link;
    char pad5C[8];
    unsigned int flags;
    char pad68[0x80 - 0x68];
};

typedef struct {
    char pad0[0xC];
    Rec *recs;
    char pad10[0x30 - 0x10];
    int count;
} Obj;

void func_15A250(Obj *o)
{
    Rec *p;
    Rec *end;

    p = o->recs;
    end = p + o->count;
    for (; p != end; p++) {
        if (p->flags & 1) {
            p->link->back = 0;
        }
    }
}
