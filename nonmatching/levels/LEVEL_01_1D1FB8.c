/* USA LEVEL_01.REL:0x1D1FB8, 100-byte candidate (14 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x20.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int func_12A068(unsigned int id);
void func_1D1FB8(char *object)
{
    int i;
    int *p;

    p = (int *)(object + 0x80);
    for (i = 0; i != 2; i++) {
        if (p[-5] != 0) {
            p[0] = func_12A068(p[-5]);
        } else {
            p[0] = 0;
        }
        p += 6;
    }
}
