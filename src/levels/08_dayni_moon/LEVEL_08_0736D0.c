extern char D_00288520[];

char * func_0736D0(void)
{
    char *entry = D_00288520;
    char *end = D_00288520 + 2520;
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
