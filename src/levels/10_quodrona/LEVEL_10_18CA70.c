/* LEVEL_10:0x18CA70 -- rebases the record's two resource offsets into pointers (failing when either has no valid target) and sets a flag bit on the object. */
typedef struct Res {
    char pad_00[0x40];
    int field_40;
} Res;

typedef struct Rec {
    int first;
    int second;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
    char pad_58[0x0C];
    unsigned int flags;
} Obj;

extern int D_0020F9F4;

static __inline__ int Fixup(int *slot)
{
    Res *res;

    if (*slot == 0)
        return 0;
    res = (Res *)(D_0020F9F4 + *slot);
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
    *slot = D_0020F9F4 + value;
    return 1;
}

int func_18CA70(Obj *self)
{
    Rec *rec = self->rec;

    if (!Fixup(&rec->first))
        return 0;
    if (!Reloc(&rec->second))
        return 0;
    self->flags |= 0x10;
    return 1;
}
