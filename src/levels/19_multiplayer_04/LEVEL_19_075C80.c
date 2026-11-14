/* LEVEL_19:0x075C80 -- placement copy of LEVEL_16_075B00.c: clears the object's active flag and releases its pooled slot (if it holds one) through the slot table. */
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

extern Record D_001DE578[2];
extern void func_0868F0(Record *r, unsigned int id);

void func_075C80(Obj *o)
{
    Record *slot = &D_001DE578[o->slot];

    o->flags &= 0xFE;
    if (o->id != 0xFFFF) {
        func_0868F0(slot, o->id);
        o->id = 0xFFFF;
    }
}
