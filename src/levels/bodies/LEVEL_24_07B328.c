/* Candidate for LEVEL_24.REL:0x07B328.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00206A90;
extern Record D_00206A98[];

int func_07B328(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00206A90;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00206A98[count];
    D_00206A90 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

