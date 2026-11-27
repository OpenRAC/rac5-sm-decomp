/* LEVEL_18:0x027CB8 -- placement copy of LEVEL_01_02ACC0.c: finds the highest value among the enabled entries of the record's context table, or -1 when the record has no context id or all enabled values are equal. */
typedef struct {
    char pad0[3];
    unsigned char value;
    char pad4[8];
} Entry;

typedef struct {
    char pad0[0xC];
    unsigned int count;
    Entry *entries;
} Sub;

typedef struct {
    char pad[8];
    Sub sub;
} Table;

typedef struct {
    char pad[0x1C];
    Table *table;
} Context;

typedef struct {
    int pad0;
    unsigned int id;
} Rec;

extern Context *func_076690(unsigned int id);

int func_027CB8(Rec *rec)
{
    Sub *s;
    unsigned int i;
    int high;
    int low;
    int v;

    if (rec->id == 0xFFFFFFFFU)
        return -1;
    s = &func_076690(rec->id)->table->sub;
    low = 0x100;
    high = -1;
    for (i = 0; i < s->count; i++) {
        v = s->entries[i].value;
        if ((v & 0x10) == 0) {
            if (high < v)
                high = v;
            if (v < low)
                low = v;
        }
    }
    if (low != high)
        return high;
    return -1;
}
