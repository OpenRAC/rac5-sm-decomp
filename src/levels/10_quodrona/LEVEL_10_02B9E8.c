/* LEVEL_10:0x02B9E8 -- for a state 2 object whose record has the known tag, returns the address of the record's entry in the slot table, else 0. */
typedef struct Rec {
    char pad00[0x40];
    char *tag;
    unsigned char kind;
    char pad45[1];
    unsigned short index;
} Rec;

typedef struct Obj {
    char pad00[2];
    unsigned char state;
    char pad03[1];
    Rec *rec;
} Obj;

typedef struct Slot {
    char pad00[0x10];
    char *entries;
    char pad14[4];
} Slot;

typedef struct Reg {
    char pad00[0x24];
    Slot *slots;
} Reg;

typedef struct KindMap {
    char pad00[8];
    unsigned char kind_slot[256];
} KindMap;

extern char D_001FD4B0[];
extern KindMap D_0023AB70;
extern Reg *D_0020F9F0;

char *func_02B9E8(Obj *o)
{
    Rec *rec;
    Slot *slot;
    int kind;

    if (o->state != 2) {
        return 0;
    }
    rec = o->rec;
    if (rec->tag != D_001FD4B0) {
        return 0;
    }
    kind = rec->kind;
    slot = &D_0020F9F0->slots[D_0023AB70.kind_slot[kind]];
    return slot->entries + rec->index * 4;
}
