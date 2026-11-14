/* USA LEVEL_01.REL:0x118808, 160-byte candidate (14 November 2026).
 * Measured pinned: 13 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int strlen(const char *);

char *func_118808(char *src, char *dst)
{
    unsigned int len = strlen(src);
    unsigned int i = 0;
    char *end = dst + (len + 1);

    if (len != 0 && src[0] != 0) {
        do {
            unsigned char c = src[i];
            if ((unsigned int)(c - 'A') < 26) {
                dst[i] = c + 0x20;
            } else {
                dst[i] = c;
            }
            i++;
        } while (i < len && src[i] != 0);
    }
    end[-1] = 0;
    return end;
}
