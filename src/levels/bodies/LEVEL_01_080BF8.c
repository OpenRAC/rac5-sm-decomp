/* Candidate for LEVEL_01.REL:0x080BF8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_0023A88C;
extern Record D_0023A890[];

int func_080BF8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_0023A88C;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_0023A890[count];
    D_0023A88C = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

