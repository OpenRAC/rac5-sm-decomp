/* memcmp 0x01EC60B8 (14 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
int memcmp(const void *a, const void *b, unsigned int n)
{
    const unsigned char *p = a;
    const unsigned char *q = b;
    int d;

    while (n-- != (unsigned int)-1) {
        d = *p++ - *q++;
        if (d != 0)
            return d;
    }
    return 0;
}
