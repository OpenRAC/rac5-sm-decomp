/* LEVEL_17:0x15F0A0 -- walks the object's 0x80-byte entries and clears the field at +0x30 of the record behind every entry flagged with bit 0. */
typedef struct Child {
    char pad0[0x30];
    int w30;
} Child;

typedef struct Ent {
    char pad0[0x58];
    Child *child;
    char pad5C[8];
    unsigned int flags;
    char pad68[0x18];
} Ent;

typedef struct Obj {
    char pad0[0xC];
    Ent *ents;
    char pad10[0x20];
    int count;
} Obj;

void func_15F0A0(Obj *o)
{
    Ent *p = o->ents;
    Ent *end = p + o->count;

    for (; p != end; p++) {
        if (p->flags & 1)
            p->child->w30 = 0;
    }
}
