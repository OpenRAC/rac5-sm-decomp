/* UTIL_32bitStringHash__FPCc 0x01E8B328 (14 November 2026).
 * Measured pinned: 22 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
extern unsigned int strlen(const char *s);

unsigned int UTIL_32bitStringHash__FPCc(const char *s) {
    unsigned int length = strlen(s);
    unsigned int hash = length;
    unsigned int i;

    for (i = 0; i < length; i++) {
        hash = ((hash << 4) ^ (hash >> 28)) ^ *s++;
    }
    return (hash ^ (hash >> 10) ^ (hash >> 20)) & 0xFFFFFFFF;
}
