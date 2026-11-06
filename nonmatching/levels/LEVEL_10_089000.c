/* LEVEL_10.REL:0x089000, bounded 56-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +4.
 * The pinned compiler links 52 bytes and omits the retail record-pointer copy before the nested zero test. Reopen with caller and callee prototype evidence.
 */
extern long long func_088FC0(void);

long long func_089000(char *record)
{
    if (*(int *)(record + 0x14) == 0 && *(int *)(record + 0x18) == 0)
        return 0;
    return func_088FC0();
}
