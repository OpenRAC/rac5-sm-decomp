/* LEVEL_09:0x17E630 -- turns the loaded offset table of a record into pointers: eight plain slots, three slots checked through their target word, one more plain slot; fails with 0 at the first empty or invalid slot. */
typedef struct {
    int slot[12];
} Table;

typedef struct {
    char pad_00[4];
    int w4;
} Dest;

typedef struct {
    char pad_00[0x54];
    Table *table;
    Dest *dest;
} Obj;

extern int D_001F0894;

static __inline__ int Rebase(int *p)
{
    int ok;

    if (*p == 0) {
        ok = 0;
    } else {
        *p = D_001F0894 + *p;
        ok = 1;
    }
    return ok;
}

static __inline__ int RebaseChecked(int *p)
{
    int ok;
    int v;
    int t;

    v = *p;
    if (v == 0) {
        ok = 0;
    } else {
        t = D_001F0894 + v;
        if (*(int *)(t + 0x40) == 0) {
            *p = 0;
            ok = 0;
        } else {
            *p = t;
            ok = 1;
        }
    }
    return ok;
}

int func_17E630(Obj *o)
{
    Table *t = o->table;
    Dest *dest = o->dest;
    int *p = t->slot;
    unsigned int i;

    for (i = 0; i < 8; i++) {
        if (!Rebase(p)) {
            return 0;
        }
        p++;
    }
    if (!RebaseChecked(&t->slot[8])) {
        return 0;
    }
    if (!RebaseChecked(&t->slot[9])) {
        return 0;
    }
    if (!RebaseChecked(&t->slot[11])) {
        return 0;
    }
    if (!Rebase(&t->slot[10])) {
        return 0;
    }
    dest->w4 = 0;
    return 1;
}
