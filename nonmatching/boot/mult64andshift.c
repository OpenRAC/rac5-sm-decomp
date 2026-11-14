/* mult64andshift 0x01EB0C40 (14 November 2026).
 * Measured pinned: 4 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
int mult64andshift(unsigned int a, unsigned int b, int shift)
{
    return (int)(((unsigned long long)a * b) >> shift);
}
