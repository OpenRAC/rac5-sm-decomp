/* LEVEL_07:0x028AF8 -- placement copy of LEVEL_01_028798.c: clears the first matching word of a four-slot table, up to four passes. */
typedef struct { char before[0x24]; int slots[4]; } Table;
extern Table D_00246840;

void func_028AF8(int value)
{
    unsigned int base = (unsigned int)&D_00246840;
    int *entry = (int *)(base + 0x24);
    unsigned int index = 0;
    do {
        ++index;
        if (value == *entry)
            *entry = 0;
        ++entry;
    } while (index < 4);
}
