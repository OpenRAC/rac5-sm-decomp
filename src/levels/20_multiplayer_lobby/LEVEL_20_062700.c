/* Candidate for LEVEL_20.REL:0x062700.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_001447C4;
extern Record D_001447C8[];

int func_062700(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_001447C4;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_001447C8[count];
    D_001447C4 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

