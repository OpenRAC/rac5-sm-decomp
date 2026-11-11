/* LEVEL_10:0x026E08 -- placement copy of LEVEL_01_027528.c: tests one bit of a halfword in a table at a fixed offset. */
extern char *D_001FCFAC;

unsigned int func_026E08(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_001FCFAC;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
