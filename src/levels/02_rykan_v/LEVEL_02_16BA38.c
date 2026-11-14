/* LEVEL_02:0x16BA38 -- clears the object's two state bytes, turns the record's stored offsets into pointers against the global pool and resolves its six slot entries; reports 1 when everything resolved. */
typedef struct {
    char pad_000[0x100];
    int w100;
    int w104;
    char pad_108[0x170 - 0x108];
    int slots[6];
} Rec;

typedef struct {
    char pad_00[0x45];
    unsigned char b45;
    unsigned char b46;
    char pad_47[0x54 - 0x47];
    Rec *rec;
} Obj;

extern char *D_0021BD54;

static inline int Rebase(int *slot)
{
    int off = *slot;
    int ok;

    if (off == 0) {
        ok = 0;
    } else {
        *slot = (int)(D_0021BD54 + off);
        ok = 1;
    }
    return ok;
}

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

int func_16BA38(Obj *o)
{
    Rec *r = o->rec;
    unsigned int i;

    o->b46 = 0;
    o->b45 = 0;
    if (r->w100 != 0) {
        r->w100 = (int)(D_0021BD54 + r->w100);
    }
    if (!Rebase(&r->w104)) {
        return 0;
    }
    for (i = 0; i < 6; i++) {
        if (!Fix(&r->slots[i])) {
            return 0;
        }
    }
    return 1;
}
