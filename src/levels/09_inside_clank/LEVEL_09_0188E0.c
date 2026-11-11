/* LEVEL_09.REL:0x0188E0: bounded bitmap-bit test. */
extern char *D_001F0890;
extern char *D_001D91CC;

int func_0188E0(int value)
{
    int origin = *(int *)(D_001F0890 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_001D91CC + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
