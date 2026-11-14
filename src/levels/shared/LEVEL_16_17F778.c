/* LEVEL_16:0x17F778 -- clears a field of the target of every flagged 0x80-byte record of an object's record table. */
typedef struct Tgt {
    char pad0[0x2C];
    int w2C;
} Tgt;

typedef struct Rec {
    char pad0[0x58];
    Tgt *link;
    char pad5C[8];
    unsigned int flags;
    char pad68[0x80 - 0x68];
} Rec;

typedef struct {
    char pad0[0xC];
    Rec *recs;
    char pad10[0x30 - 0x10];
    int count;
} Obj;

void func_17F778(Obj *o)
{
    Rec *p;
    Rec *end;

    p = o->recs;
    end = p + o->count;
    for (; p != end; p++) {
        if (p->flags & 1) {
            p->link->w2C = 0;
        }
    }
}
