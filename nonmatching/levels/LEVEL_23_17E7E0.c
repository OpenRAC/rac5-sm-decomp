/* LEVEL_23.REL:0x17E7E0, bounded 64-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +4.
 * The optional record lookup uses a shorter branch path. Reopen with the pointer and callee argument types.
 */
extern char *D_001DBE24;
extern int func_17DF28(char *, int);

int func_17E7E0(char *record)
{
    char *object;
    if (record == 0) {
        record = D_001DBE24;
        if (record == 0) return 0;
    }
    object = *(char **)(record + 0x58);
    return func_17DF28(record, (unsigned char)object[0xad]);
}
