/* LEVEL_05:0x1581A8 -- placement copy of LEVEL_01_1639A8.c: when the linked record's active byte is set, runs the helper on its two embedded sub-records. */
extern void func_106410(char *a0);

void func_1581A8(char *o)
{
    unsigned char *s = *(unsigned char **)(o + 0x58);

    if (s[0x25D] != 0) {
        func_106410((char *)s + 0x13C);
        func_106410((char *)s + 0x198);
    }
}
