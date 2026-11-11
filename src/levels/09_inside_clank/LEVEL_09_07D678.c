/* Candidate for LEVEL_09.REL:0x07D678.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_0022200C;
extern Record D_00222010[];

int func_07D678(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_0022200C;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_00222010[count];
    D_0022200C = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

