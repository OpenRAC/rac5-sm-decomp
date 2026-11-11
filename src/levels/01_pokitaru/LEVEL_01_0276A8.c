/* LEVEL_01:0x0276A8 -- sets or clears bit 1 of a flag byte at index in a table. */
extern char *D_001F3FAC;

int func_0276A8(unsigned int index, int enabled)
{
    unsigned char *flag;

    if (index >= 100)
        return 0;
    flag = (unsigned char *)((unsigned int)D_001F3FAC + (index + 0x1b60));
    if (enabled)
        *flag |= 2;
    else
        *flag &= ~2;
    return 1;
}
