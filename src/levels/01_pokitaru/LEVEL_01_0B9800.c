/* LEVEL_01:0x0B9800 -- stores a byte into one row of a table of byte rows, if the index is in range. */
struct EntrySet { unsigned char **items; unsigned int count; };

int func_0B9800(struct EntrySet *set, unsigned int index, int slot, int value)
{
    unsigned char **items;
    unsigned char *row;
    unsigned int offset;

    if (index >= set->count)
        return 0;
    items = set->items;
    offset = slot * 0x30;
    row = items[index] + offset;
    row[0x24] = value;
    return 1;
}
