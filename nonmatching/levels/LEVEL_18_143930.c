/* LEVEL_18.REL:0x143930, bounded 56-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +28.
 * The pinned compiler links 52 bytes and changes the two table-entry tests. Reopen with evidence for the table record layout or return-value control flow.
 */
extern unsigned int D_002E5048[];
unsigned int *func_143930(unsigned int value)
{
    unsigned int *entry = D_002E5048 + (value & 0xff) * 0x1b;
    if (*entry == value) {
        if (entry[26] == 0)
            return 0;
        return entry;
    }
    return 0;
}
