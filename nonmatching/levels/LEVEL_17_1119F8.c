/* LEVEL_17.REL:0x1119F8, bounded 48-byte body.
 * Pinned C links 44 against the 48-byte retail body; first
 * difference at byte +4 is the missing record-pointer copy.
 * The byte clear is also scheduled before the call rather
 * than in its delay slot. Reopen with source-value lifetime
 * or a qualified compiler route. Typed records and natural
 * store orders did not match.
 */
extern void func_036010(void);

void func_1119F8(char *record)
{
    *(unsigned short *)(record + 0x100) = 0x30;
    *(unsigned short *)(record + 0x108) = 0;
    *(unsigned short *)(record + 0x10a) = 0;
    record[0xb39] = 0;
    func_036010();
}
