/* LEVEL_04.REL:0x0191D8: bounded bitmap-bit test. */
extern char *D_002201B0;
extern char *D_0020854C;

int func_0191D8(int value)
{
    int origin = *(int *)(D_002201B0 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_0020854C + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
