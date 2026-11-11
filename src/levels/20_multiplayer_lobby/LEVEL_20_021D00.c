/* LEVEL_20:0x021D00 -- placement copy of LEVEL_01_0276A8.c: sets or clears bit 1 of a flag byte at index in a table. */
extern char *D_00104194;

int func_021D00(unsigned int index, int enabled)
{
    unsigned char *flag;

    if (index >= 100)
        return 0;
    flag = (unsigned char *)((unsigned int)D_00104194 + (index + 0x1b60));
    if (enabled)
        *flag |= 2;
    else
        *flag &= ~2;
    return 1;
}
