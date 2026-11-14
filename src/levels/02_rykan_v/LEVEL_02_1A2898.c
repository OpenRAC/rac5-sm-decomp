/* LEVEL_02:0x1A2898 -- resolves two stored offsets of the object's record against the global pool, keeping each only when the pooled entry's word at 0x40 is set; on success sets two setting bytes and reports 1. */
typedef struct { char pad_00[0x8]; int slot8; int slotC; } Rec;
typedef struct {
    char pad_00[0x54];
    Rec *rec;
    char pad_58[0x76 - 0x58];
    unsigned char b76;
    unsigned char b77;
} Obj;

extern char *D_0021BD54;

static inline int Fix(int *slot)
{
    char *p;

    if (*slot == 0) {
        return 0;
    }
    p = D_0021BD54 + *slot;
    if (*(int *)(p + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)p;
    return 1;
}

int func_1A2898(Obj *o)
{
    Rec *r = o->rec;

    if (Fix(&r->slot8) == 0) {
        return 0;
    }
    if (Fix(&r->slotC) == 0) {
        return 0;
    }
    o->b76 = 0x10;
    o->b77 = 0x20;
    return 1;
}
