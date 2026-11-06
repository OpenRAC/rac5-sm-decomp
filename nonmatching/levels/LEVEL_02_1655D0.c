/* LEVEL_02.REL:0x1655D0, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +4.
 * The pinned compiler links 56 bytes but loads the record field before the global comparison. Reopen with original value lifetime or record type.
 */
extern char *D_0024C984;

int func_1655D0(char *record)
{
    int state = *(int *)(*(char **)(record + 0x58) + 0x24);
    if (record == D_0024C984) return 1;
    return state != 0 && state == *(int *)(D_0024C984 + 0x24);
}
