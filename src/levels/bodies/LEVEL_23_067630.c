extern char D_00206710[];

char * func_067630(void)
{
    char *entry = D_00206710;
    char *end = D_00206710 + 2520;
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
