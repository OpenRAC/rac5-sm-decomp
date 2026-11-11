/* Candidate for LEVEL_17.REL:0x073E70.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_001E2254;
extern Record D_001E2258[];

int func_073E70(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_001E2254;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001E2258[count];
    D_001E2254 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

