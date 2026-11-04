/* Candidate for LEVEL_09.REL:0x07D6C8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00222310;
extern Record D_00222318[];

int func_07D6C8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00222310;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00222318[count];
    D_00222310 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

