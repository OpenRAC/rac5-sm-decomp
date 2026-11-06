/* LEVEL_22.REL:0x131B00, bounded 64-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +4.
 * The optional record lookup uses a shorter branch path. Reopen with the pointer and callee argument types.
 */
extern char *D_001668A4;
extern int func_131248(char *, int);

int func_131B00(char *record)
{
    char *object;
    if (record == 0) {
        record = D_001668A4;
        if (record == 0) return 0;
    }
    object = *(char **)(record + 0x58);
    return func_131248(record, (unsigned char)object[0xad]);
}
