/* LEVEL_01.REL:0x023C68, bounded 60-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +10.
 * The pinned compiler links 60 bytes but uses another comparison register and call-argument schedule. Branch and old-style callee declarations still miss. Reopen with the original call prototype and record value lifetime.
 */
extern void func_023B90();
void func_023C68(char *record)
{
    if (*(int *)(record + 0x9a8) != *(int *)(record + 0x9a0)) {
        func_023B90();
        return;
    }
    func_023B90(record, *(int *)(record + 0x9ac));
}