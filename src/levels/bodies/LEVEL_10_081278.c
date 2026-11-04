/* Candidate for LEVEL_10.REL:0x081278.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00243F90;
extern Record D_00243F98[];

int func_081278(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00243F90;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00243F98[count];
    D_00243F90 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

