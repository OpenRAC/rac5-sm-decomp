/* Candidate for LEVEL_15.REL:0x0656F8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00182BF8;
extern Record D_00182C00[];

int func_0656F8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00182BF8;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00182C00[count];
    D_00182BF8 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

