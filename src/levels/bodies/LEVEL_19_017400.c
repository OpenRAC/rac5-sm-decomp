/* LEVEL_19.REL:0x017400: bounded bitmap-bit test. */
extern char *D_001B5A20;
extern char *D_0019BFD4;

int func_017400(int value)
{
    int origin = *(int *)(D_001B5A20 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_0019BFD4 + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
