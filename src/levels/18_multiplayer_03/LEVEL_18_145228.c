/* LEVEL_18:0x145228 -- converts the record's stored offsets into pointers against the resource base (dropping the first when its target is empty) and runs the record setup between them. */
typedef struct Rec {
    char pad_00[0x2C];
    int first;
    int second;
    int third;
} Rec;

typedef struct Ent {
    char pad_00[0x40];
    int value;
} Ent;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
} Obj;

extern char *D_001B5D24;
extern void func_02CD30(Rec *a0);

void func_145228(Obj *object)
{
    Rec *rec = object->rec;
    Ent *ent;

    if (rec->first != 0) {
        ent = (Ent *)(D_001B5D24 + rec->first);
        if (ent->value == 0)
            rec->first = 0;
        else
            rec->first = (int)ent;
    }
    if (rec->second != 0)
        rec->second = (int)(D_001B5D24 + rec->second);
    func_02CD30(rec);
    if (rec->third != 0)
        rec->third = (int)(D_001B5D24 + rec->third);
}
