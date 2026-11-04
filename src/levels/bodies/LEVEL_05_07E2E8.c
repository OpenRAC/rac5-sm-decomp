/* Candidate for LEVEL_05.REL:0x07E2E8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00226A50;
extern Record D_00226A58[];

int func_07E2E8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00226A50;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00226A58[count];
    D_00226A50 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

