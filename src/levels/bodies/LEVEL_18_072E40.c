/* Candidate for LEVEL_18.REL:0x072E40.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_001F1398;
extern Record D_001F13A0[];

int func_072E40(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_001F1398;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001F13A0[count];
    D_001F1398 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

