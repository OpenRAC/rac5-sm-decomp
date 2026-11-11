/* LEVEL_01:0x1639A8 -- when the linked record's active byte is set, runs the helper on its two embedded sub-records. */
extern void func_108D30(char *a0);

void func_1639A8(char *o)
{
    unsigned char *s = *(unsigned char **)(o + 0x58);

    if (s[0x25D] != 0) {
        func_108D30((char *)s + 0x13C);
        func_108D30((char *)s + 0x198);
    }
}
