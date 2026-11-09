/* LEVEL_22.REL:0x10EE78: reviewed 96-byte candidate.
 * Rebuilds six 3-float entries from a constant table and clears two parallel
 * arrays.
 * pinned C with gnu-ee-trial links 96/96 bytes; first differs at +16 (3
 * words).
 * The flags pointer is computed from the copied base register instead of the
 * original base, and three address additions are reordered.
 * Retry: Recover the pointer derivation of the flags field.
 * No matching credit.
 */
extern float D_001752D8[];

void func_10EE78(char *a0)
{
    char *s;
    char *bytes;
    int *flags;
    float *dst;
    int i;

    s = *(char **)(a0 + 0x58);
    bytes = s + 0x84;
    flags = (int *)(s + 0x60);
    dst = (float *)s;
    for (i = 0; i < 6; i++) {
        dst[0] = D_001752D8[0];
        dst[1] = D_001752D8[1];
        dst[2] = D_001752D8[2];
        flags[i] = 0;
        bytes[i] = 0;
        dst += 3;
    }
}
