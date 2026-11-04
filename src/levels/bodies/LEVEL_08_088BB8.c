/* Candidate for LEVEL_08.REL:0x088BB8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00289E20;
extern Record D_00289E28[];

int func_088BB8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00289E20;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_00289E28[count];
    D_00289E20 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

