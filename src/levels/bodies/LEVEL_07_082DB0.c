/* Candidate for LEVEL_07.REL:0x082DB0.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00250490;
extern Record D_00250498[];

int func_082DB0(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00250490;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00250498[count];
    D_00250490 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

