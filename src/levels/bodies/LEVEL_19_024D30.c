/* LEVEL_19:0x024D30 -- placement copy of LEVEL_01_0276A8.c: sets or clears bit 1 of a flag byte at index in a table. */
extern char *D_001A2C34;

int func_024D30(unsigned int index, int enabled)
{
    unsigned char *flag;

    if (index >= 100)
        return 0;
    flag = (unsigned char *)((unsigned int)D_001A2C34 + (index + 0x1b60));
    if (enabled)
        *flag |= 2;
    else
        *flag &= ~2;
    return 1;
}
