/* Candidate for LEVEL_17.REL:0x073EC0.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_001E2318;
extern Record D_001E2320[];

int func_073EC0(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_001E2318;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001E2320[count];
    D_001E2318 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

