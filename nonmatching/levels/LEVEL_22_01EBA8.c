/* LEVEL_22.REL:0x01EBA8, bounded 60-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +8.
 * The pinned compiler links 60 bytes but uses another comparison register and call-argument schedule. Branch and old-style callee declarations still miss. Reopen with the original call prototype and record value lifetime.
 */
extern void func_01EAD0(char *, int);

void func_01EBA8(char *record)
{
    if (*(int *)(record + 0x9a0) == *(int *)(record + 0x9a8))
        func_01EAD0(record, *(int *)(record + 0x9ac));
    else
        func_01EAD0(record, 0);
}
