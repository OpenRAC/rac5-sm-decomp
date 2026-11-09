/* LEVEL_23:0x17E7E0 -- placement copy of LEVEL_22_131B00.c: returns a per-record value, falling back to a global record when none is given. */
extern char *D_001DBE24;
extern float func_17DF28(char *, int);

float func_17E7E0(char *record)
{
    char *object;
    if (record == 0) {
        record = D_001DBE24;
        if (record == 0) return 0.0f;
    }
    object = *(char **)(record + 0x58);
    return func_17DF28(record, (unsigned char)object[0xad]);
}
