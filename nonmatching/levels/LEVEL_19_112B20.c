/* LEVEL_19.REL:0x112B20, bounded 48-byte body.
 * Pinned C links 44 against the 48-byte retail body; first
 * difference at byte +4 is the missing record-pointer copy.
 * The byte clear is also scheduled before the call rather
 * than in its delay slot. Reopen with source-value lifetime
 * or a qualified compiler route. Typed records and natural
 * store orders did not match.
 */
extern void func_035A50(void);

void func_112B20(char *record)
{
    *(unsigned short *)(record + 0x100) = 0x30;
    *(unsigned short *)(record + 0x108) = 0;
    *(unsigned short *)(record + 0x10a) = 0;
    record[0xb39] = 0;
    func_035A50();
}
