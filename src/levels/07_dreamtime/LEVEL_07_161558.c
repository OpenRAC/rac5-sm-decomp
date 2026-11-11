/* LEVEL_07:0x161558 -- placement copy of LEVEL_01_1639A8.c: when the linked record's active byte is set, runs the helper on its two embedded sub-records. */
extern void func_10C268(char *a0);

void func_161558(char *o)
{
    unsigned char *s = *(unsigned char **)(o + 0x58);

    if (s[0x25D] != 0) {
        func_10C268((char *)s + 0x13C);
        func_10C268((char *)s + 0x198);
    }
}
