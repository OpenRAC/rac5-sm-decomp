/* LEVEL_22:0x10EE78 -- rebuilds six 3-float entries from a constant table and clears two parallel arrays. */

extern float D_001752D8[];

void func_10EE78(char *a0)
{
    char *s;
    char *bytes;
    int *flags;
    float *dst;
    int i;

    s = *(char **)(a0 + 0x58);
    flags = (int *)(s + 0x60);
    bytes = s + 0x84;
    dst = (float *)s;
    for (i = 0; i < 6; i++) {
        dst[0] = D_001752D8[0];
        dst[1] = D_001752D8[1];
        dst[2] = D_001752D8[2];
        *flags++ = 0;
        bytes[i] = 0;
        dst += 3;
    }
}
