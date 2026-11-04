/* Candidate for LEVEL_15.REL:0x0656A8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_001828F4;
extern Record D_001828F8[];

int func_0656A8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_001828F4;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_001828F8[count];
    D_001828F4 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

