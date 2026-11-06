/* LEVEL_03.REL:0x177FF0: Ghidra body 84 bytes.
 * Pinned pure C links 84 bytes and first differs at +2.
 * Recheck the indexed table layout and argument register assignment. No matching credit.
 */
extern char D_0024A5DC[];

void func_177FF0(char *object, int mask, int flags)
{
    object = *(char **)(object + 0x58);
    if (*(unsigned short *)object != 0xffffu) {
        unsigned int group = *(unsigned char *)(object + 3);
        int base = *(int *)(D_0024A5DC + group * 0x68) +
                   (unsigned int)*(unsigned short *)object * 0x10;
        unsigned short *field = (unsigned short *)(base + 8);
        *field = (*field & mask) | flags;
    }
}
