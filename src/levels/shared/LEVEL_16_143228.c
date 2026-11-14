/* LEVEL_16:0x143228 -- clears the back pointer of the target of every flagged 0x80-byte record of an object's record table. */
typedef struct Target {
    char pad0[0x28];
    void *back;
} Target;

typedef struct Rec {
    char pad0[0x58];
    Target *link;
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

void func_143228(Obj *o)
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
