/* Candidate for LEVEL_19.REL:0x0738D8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_001F1198;
extern Record D_001F11A0[];

int func_0738D8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_001F1198;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001F11A0[count];
    D_001F1198 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

