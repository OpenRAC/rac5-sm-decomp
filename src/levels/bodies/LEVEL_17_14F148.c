/* LEVEL_17:0x14F148 -- walks a 0x80-byte record table, runs two checks on matching records, then sets a flag. */
extern char *D_001B11A4;
extern char *D_001B11A8;
extern int func_16A7D0(char *p);
extern int func_16A818(char *p);

void func_14F148(char *o)
{
    char *m;
    char *s2;
    char *p;
    int r;

    m = *(char **)(o + 0x58);
    s2 = *(char **)m;
    for (p = D_001B11A4; p != D_001B11A8; p += 0x80) {
        if (*(int *)(p + 0x64) & 1) {
            r = func_16A7D0(p);
            if (r != *(int *)(s2 + 0xFC)) {
                r = func_16A818(p);
                if (r == 0) {
                    return;
                }
            }
        }
    }
    *(int *)(m + 0x40) = *(int *)(m + 0x40) | 8;
}
