/* LEVEL_22.REL:0x0F4708, bounded 60-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +6.
 * The pinned compiler links 60 bytes but first differs at byte +6 in the masked table index, signed range test and record pointer registers. Natural integer and byte index forms miss. Reopen with caller or table-layout evidence.
 */
extern int D_00165D90[];
int *func_0F4708(unsigned int value)
{
    unsigned char index = (unsigned char)value;
    int *entry;
    if (index >= 16)
        return 0;
    entry = D_00165D90 + index * 3;
    if (entry[2] != value)
        return 0;
    return entry;
}