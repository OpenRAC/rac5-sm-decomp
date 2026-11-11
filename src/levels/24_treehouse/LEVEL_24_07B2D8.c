/* Candidate for LEVEL_24.REL:0x07B2D8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_0020678C;
extern Record D_00206790[];

int func_07B2D8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_0020678C;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_00206790[count];
    D_0020678C = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

