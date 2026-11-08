/* LEVEL_07.REL:0x019BE0: bounded bitmap-bit test. */
extern char *D_0021B090;
extern char *D_002036CC;

int func_019BE0(int value)
{
    int origin = *(int *)(D_0021B090 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_002036CC + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
