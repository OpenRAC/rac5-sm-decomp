/* Candidate for LEVEL_03.REL:0x080A28.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00255A10;
extern Record D_00255A18[];

int func_080A28(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00255A10;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00255A18[count];
    D_00255A10 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

