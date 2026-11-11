/* LEVEL_22:0x0C66D0 -- takes the next 12-byte record of a table and hands it
   to the shared consumer. */
typedef struct {
    float f[2];
    int i;
} Record;

typedef struct {
    Record records[8];
    int count;
    int index;
} Table;

extern void func_0C6658(Table *table);

int func_0C66D0(Table *arg, Record *dest)
{
    Table *table = arg;
    int index = table->index;
    int count = table->count;

    if (count == index)
        return 0;

    if (dest == 0)
        return 0;

    *dest = table->records[index];

    func_0C6658(table);

    return 1;
}
