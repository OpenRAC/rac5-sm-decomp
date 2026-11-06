/* LEVEL_17.REL:0x143870, bounded 56-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +28.
 * The pinned compiler links 52 bytes and changes the two table-entry tests. Reopen with evidence for the table record layout or return-value control flow.
 */
extern unsigned int D_002D5FB8[];
unsigned int *func_143870(unsigned int value)
{
    unsigned int *entry = D_002D5FB8 + (value & 0xff) * 0x1b;
    if (*entry == value) {
        if (entry[26] == 0)
            return 0;
        return entry;
    }
    return 0;
}
