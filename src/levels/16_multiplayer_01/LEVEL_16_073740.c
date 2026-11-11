/* Candidate for LEVEL_16.REL:0x073740.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_001F0F54;
extern Record D_001F0F58[];

int func_073740(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_001F0F54;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001F0F58[count];
    D_001F0F54 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

