/* Candidate for LEVEL_06.REL:0x07A7D8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_0022760C;
extern Record D_00227610[];

int func_07A7D8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_0022760C;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_00227610[count];
    D_0022760C = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

