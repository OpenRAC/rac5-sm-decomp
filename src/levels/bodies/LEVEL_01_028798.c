/* LEVEL_01:0x028798 -- clears the first matching word of a four-slot table, up to four passes. */
typedef struct { char before[0x24]; int slots[4]; } Table;
extern Table D_00230F40;

void func_028798(int value)
{
    unsigned int base = (unsigned int)&D_00230F40;
    int *entry = (int *)(base + 0x24);
    unsigned int index = 0;
    do {
        ++index;
        if (value == *entry)
            *entry = 0;
        ++entry;
    } while (index < 4);
}
