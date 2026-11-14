/* USA LEVEL_01.REL:0x0004C8, 40-byte candidate (14 November 2026).
 * Measured pinned: 6 differing words; first difference at 16.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern unsigned char *D_001F3FAC;

void func_0004C8(int index, int bit)
{
    int off = index + 0x859;
    unsigned char *p = D_001F3FAC + off;

    *p = *p | (1 << bit);
}
