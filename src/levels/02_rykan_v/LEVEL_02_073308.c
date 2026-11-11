extern char D_002507A0[];

char * func_073308(void)
{
    char *entry = D_002507A0;
    char *end = D_002507A0 + 2520;
    for (;;) {
        if ((signed char)entry[0x30] != -2) {
            entry += 0x3c;
            if (entry >= end) return 0;
            continue;
        }
        entry[0x30] = -1;
        return entry;
    }
}
