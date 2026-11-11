/* Candidate for LEVEL_03.REL:0x0809D8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_0025570C;
extern Record D_00255710[];

int func_0809D8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_0025570C;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_00255710[count];
    D_0025570C = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

