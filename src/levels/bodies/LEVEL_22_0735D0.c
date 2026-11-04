/* Candidate for LEVEL_22.REL:0x0735D0.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00190484;
extern Record D_00190488[];

int func_0735D0(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00190484;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_00190488[count];
    D_00190484 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

