/* LEVEL_01:0x1C6530 -- registers the object with the hash-keyed slot, marks it, and walks the entries of its table, failing when the table or an entry is missing. */
typedef struct Entry {
    char pad_00[0xC];
    unsigned int count;
    char pad_10[0x14];
} Entry;

typedef struct Table {
    int pad_00;
    unsigned int count;
    Entry entries[1];
} Table;

typedef struct Sub {
    char pad_00[0x1C];
    Table *table;
} Sub;

typedef struct Rec {
    char pad_00[4];
    Sub *sub;
    char pad_08[0x2C];
} Rec;

typedef struct Set {
    char pad_00[4];
    Rec *recs;
} Set;

typedef struct Obj {
    char pad_00[0x40];
    Set *set;
    unsigned char index;
    char pad_45[0xF];
    float *scale;
    char pad_58[0xC];
    unsigned int flags;
} Obj;

extern int D_00398798;
extern int func_12B1C8(unsigned int kind, int count);

int func_1C6530(Obj *self)
{
    int *slot = &D_00398798;
    float *scale = self->scale;
    Table *table;
    Entry *entry;
    unsigned int i;
    unsigned int j;
    unsigned int n;
    float v[3];

    *slot = func_12B1C8(0x5DD0EB6A, 8);
    self->flags |= 0x20;
    table = self->set->recs[self->index].sub->table;
    if (table == 0)
        return 0;
    v[0] = 1.0f;
    v[1] = *scale;
    v[2] = 1.0f;
    for (i = 0; i < table->count; i++) {
        entry = &table->entries[i];
        if (entry == 0)
            return 0;
        n = entry->count;
        for (j = 0; j < n; j++)
            ;
    }
    return 1;
}
