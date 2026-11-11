/* LEVEL_06:0x127FA0 -- appends a key and value pair to the 32-entry table;
   returns 0 when it is full. */
typedef struct {
    unsigned int count;
    int keys[32];
    int values[32];
} Table;

int func_127FA0(Table *table, int key, int value)
{
    if (table->count < 32) {
        table->keys[table->count] = key;
        table->values[table->count] = value;
        table->count++;
        return 1;
    }
    return 0;
}
