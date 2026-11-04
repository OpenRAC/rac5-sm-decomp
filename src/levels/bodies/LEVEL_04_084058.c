/* Candidate for LEVEL_04.REL:0x084058.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_002553A0;
extern Record D_002553A8[];

int func_084058(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_002553A0;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_002553A8[count];
    D_002553A0 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

