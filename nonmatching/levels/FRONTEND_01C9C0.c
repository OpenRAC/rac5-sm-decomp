/* FRONTEND.REL:0x01C9C0, bounded 160-byte candidate.
 * Isolated pinned C object: 160 bytes; first linked difference
 * at body byte +32. Not linked into the accepted gate or counted.
 * Reopen: The first 32 bytes match. The retail computes dst+len+1 once and reuses it for the terminator store and for the return; GCC materialises two distinct addresses. Reopen by naming the end pointer before the guard so the address is CSE'd, keeping len in $3.
 */
extern int strlen(const char *);

char *func_0001C9C0(char *src, char *dst)
{
    unsigned int len = strlen(src);
    unsigned int i = 0;

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
    *(dst + (len + 1) - 1) = 0;
    return dst + (len + 1);
}
