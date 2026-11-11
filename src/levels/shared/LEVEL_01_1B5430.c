/* LEVEL_01:0x1B5430 -- reports whether the entry indexed by the table count
   carries the id; the comparison never uses the loop counter. */
typedef struct {
    int id;
    char pad[0x28];
} Entry;

typedef struct {
    int pad0;
    unsigned int count;
    Entry entries[1];
} Table;

typedef struct {
    char pad[0x58];
    Table *table;
} Obj;

int func_1B5430(Obj *obj, int id)
{
    Table *table = obj->table;
    unsigned int i;

    for (i = 0; i < table->count; i++) {
        if (table->entries[table->count].id == id)
            return 1;
    }
    return 0;
}
