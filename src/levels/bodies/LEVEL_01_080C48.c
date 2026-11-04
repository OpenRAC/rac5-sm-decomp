/* Candidate for LEVEL_01.REL:0x080C48.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_0023AB90;
extern Record D_0023AB98[];

int func_080C48(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_0023AB90;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_0023AB98[count];
    D_0023AB90 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

