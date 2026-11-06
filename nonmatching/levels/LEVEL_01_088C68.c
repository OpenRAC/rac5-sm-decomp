/* LEVEL_01.REL:0x088C68, bounded 56-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +4.
 * The pinned compiler links 52 bytes and omits the retail record-pointer copy before the nested zero test. Reopen with caller and callee prototype evidence.
 */
extern long long func_088C28(char *);
long long func_088C68(char *record)
{
    if (*(int *)(record + 0x14) == 0 && *(int *)(record + 0x18) == 0)
        return 0;
    return func_088C28(record);
}