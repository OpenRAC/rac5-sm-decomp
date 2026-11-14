/* USA LEVEL_01.REL:0x015EE8, 80-byte candidate (14 November 2026).
 * Measured pinned --as: 5 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int D_0021A7F0;

int func_015EE8(float *out)
{
    switch (D_0021A7F0) {
    case 1:
        *out = -4.914999961853027f;
        return 1;
    case 16:
        *(int *)out = 0;
        return 1;
    }
    return 0;
}
