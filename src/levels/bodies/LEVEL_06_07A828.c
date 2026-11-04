/* Candidate for LEVEL_06.REL:0x07A828.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00227910;
extern Record D_00227918[];

int func_07A828(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00227910;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00227918[count];
    D_00227910 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

