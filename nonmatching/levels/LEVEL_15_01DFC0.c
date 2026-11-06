/* LEVEL_15.REL:0x01DFC0, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +35.
 * The pinned compiler links 56 bytes but first differs in the post-call branch and field load. Reopen with source-level return-value lifetime or an evidenced callee prototype.
 */
extern char *func_01E9D8(int, int);
int func_01DFC0(char *record)
{
    char *value;
    if (*(int *)(record + 0x9a0) == 0)
        return 0;
    value = func_01E9D8(*(int *)(record + 0x9a0), *(int *)(record + 0xf8));
    if (value == 0)
        return 0;
    return *(int *)(value + 0x24);
}
