extern char D_001EBCE0[];

char * func_05D380(void)
{
    char *entry = D_001EBCE0;
    char *end = D_001EBCE0 + 2520;
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
