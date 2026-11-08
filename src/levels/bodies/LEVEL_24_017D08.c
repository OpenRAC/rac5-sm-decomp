/* LEVEL_24.REL:0x017D08: bounded bitmap-bit test. */
extern char *D_001D7A10;
extern char *D_001C004C;

int func_017D08(int value)
{
    int origin = *(int *)(D_001D7A10 + 0x44);
    int shifted = (int)((unsigned int)value - (unsigned int)origin) >> 7;
    unsigned int word = (unsigned int)shifted >> 5;
    unsigned int bit = (unsigned int)shifted & 31U;
    unsigned int *bitmap = *(unsigned int **)(D_001C004C + 0x10);
    unsigned int mask = 1U << bit;
    unsigned int matched = bitmap[word] & mask;
    return matched != 0;
}
