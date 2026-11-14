/* LEVEL_16:0x075B00 -- clears the object's active flag and releases its pooled slot (if it holds one) through the slot table. */
typedef struct Record {
    int count0;
    int count1;
    char remaining[0x60];
} Record;

typedef struct Obj {
    char pad0[0x48];
    unsigned short id;
    char pad4A;
    unsigned char slot;
    char pad4C[7];
    unsigned char flags;
} Obj;

extern Record D_001DE3F8[2];
extern void func_086440(Record *r, unsigned int id);

void func_075B00(Obj *o)
{
    Record *slot = &D_001DE3F8[o->slot];

    o->flags &= 0xFE;
    if (o->id != 0xFFFF) {
        func_086440(slot, o->id);
        o->id = 0xFFFF;
    }
}
