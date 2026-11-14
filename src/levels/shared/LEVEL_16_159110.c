/* LEVEL_16:0x159110 -- for every record of the object's table that has bit 0 set, clears the word at +0xC of the record it points to. */
typedef struct {
    char pad0[0xC];
    int w0C;
} Target;

typedef struct {
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

void func_159110(Obj *o)
{
    Rec *p;
    Rec *end;

    p = o->recs;
    end = p + o->count;
    for (; p != end; p++) {
        if (p->flags & 1) {
            p->link->w0C = 0;
        }
    }
}
