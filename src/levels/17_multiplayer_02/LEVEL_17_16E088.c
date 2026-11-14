/* LEVEL_17:0x16E088 -- releases the pooled slot held by the object's record, drops the entry of the owner's table that the record points at (decrementing the table's live count when the entry was active), clears the entry and notifies the object. */
typedef struct Record {
    int count0;
    int count1;
    char remaining[0x60];
} Record;

typedef struct Entry {
    char pad0[0x18];
    unsigned char flags;
    char pad19[3];
} Entry;

typedef struct Table {
    Entry entries[0x24];
    char pad[0x408 - 0x24 * 0x1C];
    unsigned char live;
} Table;

typedef struct Owner {
    char pad0[0x58];
    Table *table;
} Owner;

typedef struct World {
    char pad0[0x30];
    Owner *owner;
} World;

typedef struct Rec {
    char pad0[0x1C];
    unsigned short id;
    char pad1E;
    unsigned char slot;
    char pad20[0x34];
    unsigned char index;
} Rec;

typedef struct Obj {
    char pad0[0x54];
    World *world;
    Rec *rec;
} Obj;

extern Record D_001CF6F8[2];
extern void func_086E80(Record *r, unsigned int id);
extern void *memset(void *, int, unsigned int);
extern void func_0170F8(Obj *o);

void func_16E088(Obj *o)
{
    Rec *r = o->rec;
    World *w = o->world;
    int oa;
    Record *slot;
    Table *t;
    Entry *e;

    oa = r->slot * 0x68;
    oa += (int)D_001CF6F8;
    slot = (Record *)oa;

    if (r->id != 0xFFFF) {
        func_086E80(slot, r->id);
        r->id = 0xFFFF;
    }
    t = w->owner->table;
    e = &t->entries[r->index];
    if (e->flags & 1)
        t->live--;
    memset(e, 0, sizeof(Entry));
    func_0170F8(o);
}
