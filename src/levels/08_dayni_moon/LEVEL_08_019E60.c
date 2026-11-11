/* LEVEL_08.REL:0x019E60: bounded bitmap-bit test. */
extern char *D_0024FC50;
extern char *D_00237F4C;

int func_019E60(int value)
{
    int origin = *(int *)(D_0024FC50 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_00237F4C + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
