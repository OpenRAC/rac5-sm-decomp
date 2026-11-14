/* LEVEL_02:0x167020 -- rebases the record's first offset into a pointer (failing when it has no valid target), then rebases the second offset and reports whether it was set. */
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
} Obj;

extern int D_0021BD54;

static __inline__ int Fixup(int *slot)
{
    Res *res;

    if (*slot == 0)
        return 0;
    res = (Res *)(D_0021BD54 + *slot);
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
    *slot = D_0021BD54 + value;
    return 1;
}

int func_167020(Obj *self)
{
    Rec *rec = self->rec;

    if (!Fixup(&rec->first))
        return 0;
    return Reloc(&rec->second);
}
