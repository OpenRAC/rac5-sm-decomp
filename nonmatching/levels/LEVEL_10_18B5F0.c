/* USA LEVEL_10.REL:0x18B5F0, 100-byte candidate (14 November 2026).
 * Measured pinned: 15 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

    if (Reloc(&rec->first)) {
        return Fixup(&rec->second);
    }
    return 1;
}
