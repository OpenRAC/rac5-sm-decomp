extern char D_00242690[];

char * func_06D0A0(void)
{
    char *entry = D_00242690;
    char *end = D_00242690 + 2520;
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
