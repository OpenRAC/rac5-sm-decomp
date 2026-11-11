/* LEVEL_16:0x05E878 -- placement copy of LEVEL_01_06DE88.c. */
extern char D_001EB960[];

char * func_05E878(void)
{
    char *entry = D_001EB960;
    char *end = D_001EB960 + 2520;
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
