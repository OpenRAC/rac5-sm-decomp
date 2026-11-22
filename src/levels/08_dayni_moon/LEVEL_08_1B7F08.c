/* LEVEL_08:0x1B7F08 -- resolves the record's four stored link offsets into pointers (failing when a resolved link is not of the expected kind or none resolves), resolves the optional fifth, clears a flag bit and the mode byte, runs the follow-up and returns 1. */
extern int D_0024FC54;

typedef struct Kind {
    char pad00[0x24];
    int id;
} Kind;

typedef struct Link {
    char pad00[0x40];
    Kind *kind;
} Link;

typedef struct Rec {
    Link *link[4];
    char pad10[8];
    Link *extra;
} Rec;

typedef struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0xE];
    Rec *rec;
    char pad58[0xC];
    unsigned int flags64;
} Obj;

extern void func_1B80F8(Obj *o);

static __inline__ int Resolve(Link **slot)
{
    Link *target;

    if (*slot == 0)
        return 0;
    target = (Link *)(D_0024FC54 + (int)*slot);
    if (target->kind == 0) {
        *slot = 0;
        return 0;
    }
    *slot = target;
    return 1;
}

int func_1B7F08(Obj *o)
{
    Rec *rec = o->rec;
    int count = 0;
    int i;

    for (i = 0; i < 4; i++) {
        if (Resolve(&rec->link[i])) {
            count++;
            if (rec->link[i]->kind->id != 0xAA456197)
                return 0;
        }
    }
    if (count == 0)
        return 0;
    if (rec->extra != 0) {
        Link *t = (Link *)(D_0024FC54 + (int)rec->extra);

        if (t->kind == 0)
            rec->extra = 0;
        else
            rec->extra = t;
    }
    o->flags64 &= 0xFFDFFFFF;
    o->b45 = 0;
    func_1B80F8(o);
    return 1;
}
