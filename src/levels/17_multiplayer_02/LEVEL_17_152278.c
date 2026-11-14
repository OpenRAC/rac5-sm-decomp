/* LEVEL_17:0x152278 -- placement copy of LEVEL_16_159E78.c: releases the pooled slot held by the object's record (if any) through the slot table, then stops and clears the record's positional sound. */
typedef struct Record {
    int count0;
    int count1;
    char remaining[0x60];
} Record;

typedef struct Rec {
    unsigned short id;
    char pad2;
    unsigned char slot;
    char pad4[0x10];
    void *sound;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern Record D_001CF6F8[2];
extern void func_086E80(Record *r, unsigned int id);
extern void SND_StopPositionalSound__FP14SND_Positionalb(void *, int);

void func_152278(Obj *o)
{
    Rec *r;
    int oa;
    Record *slot;

    r = o->rec;
    oa = r->slot * 0x68;
    oa += (int)D_001CF6F8;
    slot = (Record *)oa;
    if (r->id != 0xFFFF) {
        func_086E80(slot, r->id);
        r->id = 0xFFFF;
    }
    if (r->sound != 0) {
        SND_StopPositionalSound__FP14SND_Positionalb(r->sound, 1);
        r->sound = 0;
    }
}
