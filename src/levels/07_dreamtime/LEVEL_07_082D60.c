/* Candidate for LEVEL_07.REL:0x082D60.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_0025018C;
extern Record D_00250190[];

int func_082D60(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_0025018C;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_00250190[count];
    D_0025018C = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

