/* Candidate for LEVEL_05.REL:0x07E298.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_0022674C;
extern Record D_00226750[];

int func_07E298(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_0022674C;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_00226750[count];
    D_0022674C = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

