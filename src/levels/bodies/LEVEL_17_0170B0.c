/* LEVEL_17.REL:0x0170B0: bounded bitmap-bit test. */
extern char *D_001A7EA0;
extern char *D_0018E454;

int func_0170B0(int value)
{
    int origin = *(int *)(D_001A7EA0 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_0018E454 + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
