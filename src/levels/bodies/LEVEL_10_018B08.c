/* LEVEL_10.REL:0x018B08: bounded bitmap-bit test. */
extern char *D_0020F9F0;
extern char *D_001F83CC;

int func_018B08(int value)
{
    int origin = *(int *)(D_0020F9F0 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_001F83CC + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
