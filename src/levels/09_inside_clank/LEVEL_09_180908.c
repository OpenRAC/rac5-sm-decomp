/* LEVEL_09:0x180908 -- rebases the record's two resource offsets into pointers (failing when either has no valid target), flags the first and sets the state byte. */
typedef struct Res {
    char pad_00[0x40];
    int field_40;
    char pad_44[0x20];
    unsigned int flags;
} Res;

typedef struct Rec {
    int first;
    int second;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
    char pad_58[0x1E];
    unsigned char state;
} Obj;

extern int D_001F0894;

static __inline__ int Fixup(int *slot)
{
    Res *res;

    if (*slot == 0)
        return 0;
    res = (Res *)(D_001F0894 + *slot);
    if (res->field_40 == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)res;
    return 1;
}

static __inline__ int Reloc(int *slot)
{
    int value = *slot;

    if (value == 0)
        return 0;
    *slot = D_001F0894 + value;
    return 1;
}

int func_180908(Obj *self)
{
    Rec *rec = self->rec;

    if (!Fixup(&rec->first))
        return 0;
    if (!Reloc(&rec->second))
        return 0;
    ((Res *)rec->first)->flags |= 0x20;
    self->state = 0x28;
    return 1;
}
