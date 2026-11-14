/* USA LEVEL_01.REL:0x0B2710, 44-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char D_00327988[];

void func_0B2710(int index, int value)
{
    int stride = 20;
    int outside = (index < 4) ^ 1;
    int *p;

    if (outside)
        return;
    p = (int *)(D_00327988 + index * stride);
    p[3] = value;
}
