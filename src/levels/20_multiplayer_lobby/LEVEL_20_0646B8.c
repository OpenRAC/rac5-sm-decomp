/* LEVEL_20:0x0646B8 -- placement copy of LEVEL_16_076328.c: clears the object's active flag and releases its pooled slot (if it holds one) through the slot table. */
typedef struct Record {
    int count0;
    int count1;
    char remaining[0x60];
} Record;

typedef struct Obj {
    char pad0[0x54];
    unsigned short id;
    char pad56;
    unsigned char slot;
    char pad58[9];
    unsigned char flags;
} Obj;

extern Record D_00135D78[2];
extern void func_073C78(Record *r, unsigned int id);

void func_0646B8(Obj *o)
{
    Record *slot = &D_00135D78[o->slot];

    o->flags &= 0xFE;
    if (o->id != 0xFFFF) {
        func_073C78(slot, o->id);
        o->id = 0xFFFF;
    }
}
