/* LEVEL_03:0x18DC08 -- runs the helper on each of the object's 0x40-byte slots, as many as its record counts. */
typedef struct Slot { char pad_00[0x40]; } Slot;
typedef struct Rec { char pad_00[0xC]; unsigned char count; } Rec;
typedef struct Obj { char pad_00[0x54]; Rec *rec; char *base; } Obj;
extern void func_1F57F8(char *slot);

void func_18DC08(Obj *o)
{
    Rec *rec = o->rec;
    char *base = o->base;
    unsigned int i;
    for (i = 0; i < rec->count; i++)
        func_1F57F8(base + 0x30 + i * 0x40);
}
