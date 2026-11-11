/* LEVEL_04:0x1CEFF0 -- placement copy of LEVEL_01_1BC130.c: finishes loading an object: marks it when in state 4, runs the record setup, then turns the record's stored offsets into pointers against the resource base, clearing the two that point at empty targets. */
typedef struct Ent {
    char pad_00[0x40];
    int value;
} Ent;

typedef struct Rec {
    char pad_00[0x2C];
    int first;
    int second;
    int third;
    int fourth;
    char pad_3C[8];
    int fifth;
} Rec;

struct Obj;

extern char *D_002201B4;
extern void func_02F570(struct Obj *a0);

void func_1CEFF0(char *object)
{
    Rec *rec = *(Rec **)(object + 0x54);
    Ent *ent;

    if (*(unsigned char *)(object + 0x45) == 4)
        *(unsigned int *)(object + 0x64) |= 0x30;
    func_02F570((struct Obj *)rec);
    if (rec->first != 0) {
        ent = (Ent *)(D_002201B4 + rec->first);
        if (ent->value == 0)
            rec->first = 0;
        else
            rec->first = (int)ent;
    }
    if (rec->third != 0)
        rec->third = (int)(D_002201B4 + rec->third);
    if (rec->second != 0)
        rec->second = (int)(D_002201B4 + rec->second);
    if (rec->fourth != 0)
        rec->fourth = (int)(D_002201B4 + rec->fourth);
    if (rec->fifth != 0) {
        ent = (Ent *)(D_002201B4 + rec->fifth);
        if (ent->value == 0)
            rec->fifth = 0;
        else
            rec->fifth = (int)ent;
    }
}
