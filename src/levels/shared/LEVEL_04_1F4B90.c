/* LEVEL_04:0x1F4B90 -- stores the value in the slot whose id matches. */
typedef struct {
    int ids[8];
    unsigned char values[8];
    unsigned char count;
} Table;

int func_1F4B90(Table *table, int id, int value)
{
    unsigned int i;

    for (i = 0; i < table->count; i++) {
        if (id == table->ids[i]) {
            table->values[i] = value;
            return 1;
        }
    }
    return 0;
}
