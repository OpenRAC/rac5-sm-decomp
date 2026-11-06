/* LEVEL_02.REL:0x0A0BF8, bounded 64-byte retail body.
 * Pinned C links 52 bytes; first difference at body byte +4.
 * The global record-array base and index arithmetic differ. Reopen with the record stride and field layout.
 */
extern char D_002B242C[];

int func_0A0BF8(int first, int second, int group)
{
    char *base = D_002B242C + group * 0x170c;
    unsigned int right = *(unsigned short *)(base + (second + 1) * 2);
    unsigned int left = *(unsigned short *)(base + first * 2);
    return right - left;
}
