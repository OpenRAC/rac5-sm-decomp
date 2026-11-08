/* LEVEL_02.REL:0x03BF00: reviewed 132-byte candidate.
 * pinned C with gnu-ee-trial links 128 bytes; first differs at +2.
 * Retry: Find the 16-bit source type and expression that sign-extends comparisons
 * from one load.
 * No matching credit.
 */
int func_03BF00(char *object)
{
    unsigned short raw = *(unsigned short *)(object + 0x100);
    short type = (short)raw;
    return (unsigned int)(raw - 3) < 2 ||
           type == 6 || type == 7 || type == 8 || type == 14 ||
           type == 16 || type == 17 || type == 18 || type == 15 ||
           type == 29 || type == 54 || type == 64;
}
