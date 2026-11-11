/* LEVEL_18:0x13CA80 -- placement copy of LEVEL_01_1639A8.c: when the linked record's active byte is set, runs the helper on its two embedded sub-records. */
extern void func_0EA720(char *a0);

void func_13CA80(char *o)
{
    unsigned char *s = *(unsigned char **)(o + 0x58);

    if (s[0x25D] != 0) {
        func_0EA720((char *)s + 0x13C);
        func_0EA720((char *)s + 0x198);
    }
}
