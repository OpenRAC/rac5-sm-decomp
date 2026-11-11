/* FRONTEND:0x014E10 -- skips the leading blanks of a string. */
int func_014E10(signed char *s)
{
    unsigned int i;

    if (s == 0)
        return 1;
    for (i = 0; i < 0x200; i++) {
        if (s[i] == 0)
            return 1;
        if (s[i] != 0x20)
            return 0;
    }
    return 0;
}
