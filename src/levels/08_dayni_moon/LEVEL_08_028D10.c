/* LEVEL_08:0x028D10 -- placement copy of LEVEL_01_028798.c: clears the first matching word of a four-slot table, up to four passes. */
typedef struct { char before[0x24]; int slots[4]; } Table;
extern Table D_002801C0;

void func_028D10(int value)
{
    unsigned int base = (unsigned int)&D_002801C0;
    int *entry = (int *)(base + 0x24);
    unsigned int index = 0;
    do {
        ++index;
        if (value == *entry)
            *entry = 0;
        ++entry;
    } while (index < 4);
}
