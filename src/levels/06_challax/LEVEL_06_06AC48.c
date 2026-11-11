extern char D_00226010[];

char * func_06AC48(void)
{
    char *entry = D_00226010;
    char *end = D_00226010 + 2520;
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
