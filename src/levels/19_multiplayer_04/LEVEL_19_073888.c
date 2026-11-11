/* Candidate for LEVEL_19.REL:0x073888.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_001F10D4;
extern Record D_001F10D8[];

int func_073888(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_001F10D4;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001F10D8[count];
    D_001F10D4 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

