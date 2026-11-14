/* LEVEL_04:0x194D40 -- releases the pooled slot held by the object's record (if any) through the slot table and marks the record as empty. */
/* LEVEL_04:0x194D40 -- releases the pooled slot held by the object's record (if any) through the slot table and marks the record as empty. */
typedef struct Record {
    int count0;
    int count1;
    char remaining[0x60];
} Record;

typedef struct Rec {
    char pad0[0x80];
    unsigned short id;
    char pad82;
    unsigned char slot;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern Record D_00249EF8[2];
extern void func_098950(Record *r, unsigned int id);

void func_194D40(Obj *o)
{
    Rec *r;
    int oa;
    Record *slot;

    r = o->rec;
    oa = r->slot * 0x68;
    oa += (int)D_00249EF8;
    slot = (Record *)oa;
    if (r->id != 0xFFFF) {
        func_098950(slot, r->id);
        r->id = 0xFFFF;
    }
}
