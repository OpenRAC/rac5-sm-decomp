extern char D_0024EB90[];

char * func_06ED08(void)
{
    char *entry = D_0024EB90;
    char *end = D_0024EB90 + 2520;
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
