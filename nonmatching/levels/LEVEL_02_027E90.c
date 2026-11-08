/* LEVEL_02.REL:0x027E90: reviewed 68-byte candidate.
 * pinned C with gnu-ee-trial links 68 bytes; first differs at +10.
 * Retry: Recover the pointer expression and lifetime that loads the global before
 * adding 0x1b60 and index; current C links 68 B but starts diverging in register
 * allocation at +10.
 * No matching credit.
 */
typedef struct {
    unsigned char before[0x1b60];
    unsigned char flags[100];
} State;
extern State *D_00208C2C;

unsigned int func_027E90(unsigned int index, int enable)
{
    unsigned char *flag;
    if (index >= 100)
        return 0;
    flag = &D_00208C2C->flags[index];
    if (enable != 0)
        *flag |= 2;
    else
        *flag &= ~2;
    return 1;
}
