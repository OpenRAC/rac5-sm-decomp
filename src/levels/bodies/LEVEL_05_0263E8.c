/* LEVEL_05:0x0263E8 -- placement copy of LEVEL_01_0276A8.c: sets or clears bit 1 of a flag byte at index in a table. */
extern char *D_001E332C;

int func_0263E8(unsigned int index, int enabled)
{
    unsigned char *flag;

    if (index >= 100)
        return 0;
    flag = (unsigned char *)((unsigned int)D_001E332C + (index + 0x1b60));
    if (enabled)
        *flag |= 2;
    else
        *flag &= ~2;
    return 1;
}
