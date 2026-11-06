extern char D_00205190[];

char * func_0674C8(void)
{
    char *entry = D_00205190;
    char *end = D_00205190 + 2520;
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
