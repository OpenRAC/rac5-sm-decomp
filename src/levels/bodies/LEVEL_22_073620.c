/* Candidate for LEVEL_22.REL:0x073620.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00190788;
extern Record D_00190790[];

int func_073620(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00190788;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00190790[count];
    D_00190788 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

