/* Candidate for LEVEL_08.REL:0x088B68.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_00289B1C;
extern Record D_00289B20[];

int func_088B68(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_00289B1C;
    Record *entry;

    if (count >= 64)
        return 0;
    entry = &D_00289B20[count];
    D_00289B1C = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

