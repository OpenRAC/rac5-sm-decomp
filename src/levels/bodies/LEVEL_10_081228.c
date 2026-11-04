/* Candidate for LEVEL_10.REL:0x081228.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00243C8C;
extern Record D_00243C90[];

int func_081228(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00243C8C;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_00243C90[count];
    D_00243C8C = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

