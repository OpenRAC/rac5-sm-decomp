/* RAD_IOPMemoryAmount 0x01EAF588 (14 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
unsigned int RAD_IOPMemoryAmount(unsigned int flags)
{
    unsigned int n;

    n = flags & 1;
    if (flags & 2) {
        n = n + 1;
    }
    n = (n << 12) + 0x1000;
    if (n <= 0x1C07) {
        n = 0x1C08;
    }
    return n;
}
