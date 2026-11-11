/* LEVEL_03.REL:0x019280: bounded bitmap-bit test. */
extern char *D_0021F410;
extern char *D_00207A4C;

int func_019280(int value)
{
    int origin = *(int *)(D_0021F410 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_00207A4C + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
