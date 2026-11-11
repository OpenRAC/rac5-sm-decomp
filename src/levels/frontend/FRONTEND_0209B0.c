/* FRONTEND:0x0209B0 -- returns one of two flag bits from a record word, preferring the higher one. */
extern char *D_0032814;

unsigned int func_0209B0(void)
{
    unsigned int flags = *(unsigned int *)(D_0032814 + 0x94);

    if (flags & 0x20000u)
        return 0x20000u;
    if (flags & 0x10000u)
        return 0x10000u;
    return 0;
}
