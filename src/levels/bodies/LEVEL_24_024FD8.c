/* LEVEL_24:0x024FD8 -- placement copy of LEVEL_01_0276A8.c: sets or clears bit 1 of a flag byte at index in a table. */
extern char *D_001C4C2C;

int func_024FD8(unsigned int index, int enabled)
{
    unsigned char *flag;

    if (index >= 100)
        return 0;
    flag = (unsigned char *)((unsigned int)D_001C4C2C + (index + 0x1b60));
    if (enabled)
        *flag |= 2;
    else
        *flag &= ~2;
    return 1;
}
