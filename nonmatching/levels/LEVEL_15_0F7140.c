/* LEVEL_15.REL:0x0F7140, bounded 56-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The pinned compiler links 44 bytes and reduces the staged global address to a direct pointer access. Reopen with the original data-base and field layout.
 */
extern unsigned short *D_002ECCB4;

int func_0F7140(int index, int extra)
{
    if (index >= 0)
        return D_002ECCB4[index] + extra;
    return -1;
}
