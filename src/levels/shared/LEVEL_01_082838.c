/* LEVEL_01:0x082838 -- returns the index of the table entry with the given
   id, or -1. */
typedef struct {
    char pad[0x20];
    int id;
    char pad24[0x10];
} Entry;

typedef struct {
    char pad[0x4];
    Entry *entries;
    char pad8[0x34];
    unsigned char count;
} Table;

typedef struct {
    char pad[0x40];
    Table *table;
} Obj;

int func_082838(Obj *obj, int id)
{
    Table *table = obj->table;
    unsigned int i;

    for (i = 0; i < table->count; i++)
        if (table->entries[i].id == id)
            return i;
    return -1;
}
