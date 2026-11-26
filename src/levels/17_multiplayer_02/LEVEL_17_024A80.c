/* LEVEL_17:0x024A80 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_001950B4;
extern int func_024A00(unsigned int id);

int func_024A80(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_024A00(index)) {
        p = D_001950B4 + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
