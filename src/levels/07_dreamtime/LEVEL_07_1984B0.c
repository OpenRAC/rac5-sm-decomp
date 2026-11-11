/* LEVEL_07:0x1984B0 -- rebases the three resource offsets of the record into pointers (failing when one has no valid target), then the two plain offsets, flags the last one and sets the state byte. */
typedef struct Res {
    char pad_00[0x40];
    int field_40;
    char pad_44[0x20];
    unsigned int flags;
} Res;

typedef struct Rec {
    int first;
    int second;
    int third;
    int fourth;
    int fifth;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
    char pad_58[0x1E];
    unsigned char state;
} Obj;

extern int D_0021B094;

static __inline__ int Fixup(int *slot)
{
    Res *res;

    if (*slot == 0)
        return 0;
    res = (Res *)(D_0021B094 + *slot);
    if (res->field_40 == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)res;
    return 1;
}

int func_1984B0(Obj *self)
{
    Rec *rec = self->rec;

    if (!Fixup(&rec->first))
        return 0;
    if (!Fixup(&rec->fourth))
        return 0;
    if (!Fixup(&rec->fifth))
        return 0;
    if (rec->second != 0)
        rec->second = D_0021B094 + rec->second;
    if (rec->third != 0)
        rec->third = D_0021B094 + rec->third;
    ((Res *)rec->fifth)->flags |= 0x20;
    self->state = 0x1E;
    return 1;
}
