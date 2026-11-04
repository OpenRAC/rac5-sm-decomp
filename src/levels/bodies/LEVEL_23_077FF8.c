/* Candidate for LEVEL_23.REL:0x077FF8.
 * Appends a three-word record while the fixed-size table has room.
 */
typedef struct {
    unsigned int first;
    unsigned int second;
    unsigned int third;
} Record;

extern unsigned int D_0020C010;
extern Record D_0020C018[];

int func_077FF8(unsigned int first, unsigned int second, unsigned int third)
{
    unsigned int count = D_0020C010;
    Record *entry;

    if (count >= 16)
        return 0;
    entry = &D_0020C018[count];
    D_0020C010 = count + 1;
    entry->first = first;
    entry->second = second;
    entry->third = third;
    return 1;
}

