/* LEVEL_10:0x18B5F0 -- rebases the record's first offset by the global base, then rebases the second offset into a pointer or drops it; reports whether both are valid. */
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

int func_18B5F0(Obj *self)
{
    Rec *rec = self->rec;

    if (!Reloc(&rec->first)) {
        return 0;
    }
    return Fixup(&rec->second);
}
