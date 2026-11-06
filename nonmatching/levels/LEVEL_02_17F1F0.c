/* LEVEL_02.REL:0x17F1F0, bounded 56-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +28.
 * The pinned compiler links 52 bytes and changes the two table-entry tests. Reopen with evidence for the table record layout or return-value control flow.
 */
extern unsigned int D_003AD7A8[];
unsigned int *func_17F1F0(unsigned int value)
{
    unsigned int *entry = D_003AD7A8 + (value & 0xff) * 0x1b;
    if (*entry == value) {
        if (entry[26] == 0)
            return 0;
        return entry;
    }
    return 0;
}
