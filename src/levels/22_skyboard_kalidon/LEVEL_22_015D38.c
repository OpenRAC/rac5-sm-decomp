/* LEVEL_22:0x015D38 -- placement copy of LEVEL_01_019478.c. */
/* LEVEL_01.REL:0x019478: bounded bitmap-bit test. */
extern char *D_00165D70;
extern char *D_0014E74C;

int func_015D38(int value)
{
    int origin = *(int *)(D_00165D70 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_0014E74C + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
