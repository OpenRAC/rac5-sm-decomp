/* LEVEL_19:0x166348 -- placement copy of LEVEL_16_164750.c: finds which of seven table words equals the current entry's word and stores that index in the attached record; returns 1. */
typedef struct {
    char pad00[0x20];
    int key;
    char pad24[0x34 - 0x24];
} Entry;

typedef struct {
    char pad00[4];
    Entry *entries;
} Table;

typedef struct {
    char pad00[0x24];
    unsigned char slot;
} Record;

typedef struct {
    char pad00[0x40];
    Table *table;
    unsigned char which;
    char pad45[0x58 - 0x45];
    Record *record;
} Obj;

extern int D_001D7040[];

int func_166348(Obj *o)
{
    Record *r = o->record;
    unsigned int i;

    for (i = 0; i < 7; i++) {
        if (o->table->entries[o->which].key == D_001D7040[i]) {
            r->slot = i;
            break;
        }
    }
    return 1;
}
