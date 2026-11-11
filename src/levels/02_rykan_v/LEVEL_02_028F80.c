/* LEVEL_02:0x028F80 -- placement copy of LEVEL_01_028798.c: clears the first matching word of a four-slot table, up to four passes. */
typedef struct { char before[0x24]; int slots[4]; } Table;
extern Table D_00248440;

void func_028F80(int value)
{
    unsigned int base = (unsigned int)&D_00248440;
    int *entry = (int *)(base + 0x24);
    unsigned int index = 0;
    do {
        ++index;
        if (value == *entry)
            *entry = 0;
        ++entry;
    } while (index < 4);
}
