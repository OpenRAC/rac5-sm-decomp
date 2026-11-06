/* LEVEL_08.REL:0x0A25C8, bounded 64-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +4.
 * The global record-array base and index arithmetic differ. Reopen with the record stride and field layout.
 */
extern char D_002EA1AC[];

int func_0A25C8(int first, int second, int group)
{
    char *base = D_002EA1AC + group * 0x170c;
    unsigned int right = *(unsigned short *)(base + (second + 1) * 2);
    unsigned int left = *(unsigned short *)(base + first * 2);
    return right - left;
}
