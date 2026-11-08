/* LEVEL_05.REL:0x018B40: bounded bitmap-bit test. */
extern char *D_001F5E10;
extern char *D_001DE74C;

int func_018B40(int value)
{
    int origin = *(int *)(D_001F5E10 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_001DE74C + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
