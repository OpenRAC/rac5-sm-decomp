/* LEVEL_22:0x131B00 -- returns a per-record value, falling back to a global record when none is given. */
extern char *D_001668A4;
extern float func_131248(char *, int);

float func_131B00(char *record)
{
    char *object;
    if (record == 0) {
        record = D_001668A4;
        if (record == 0) return 0.0f;
    }
    object = *(char **)(record + 0x58);
    return func_131248(record, (unsigned char)object[0xad]);
}
