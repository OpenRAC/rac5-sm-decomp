/* LEVEL_08.REL:0x024380, bounded 60-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +8.
 * The pinned compiler links 60 bytes but uses another comparison register and call-argument schedule. Branch and old-style callee declarations still miss. Reopen with the original call prototype and record value lifetime.
 */
extern void func_0242A8(char *, int);

void func_024380(char *record)
{
    if (*(int *)(record + 0x9a0) == *(int *)(record + 0x9a8))
        func_0242A8(record, *(int *)(record + 0x9ac));
    else
        func_0242A8(record, 0);
}
