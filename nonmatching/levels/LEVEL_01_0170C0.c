/* LEVEL_01.REL:0x0170C0: Ghidra body 160 bytes.
 * Pinned pure C links 156 bytes and first differs at +0.
 * Recheck state-option branches and bitfield store order. No matching credit.
 */
void func_0170C0(char *owner, long long enabled, char *state,
                 unsigned int index)
{
    unsigned int flags;
    unsigned int bit;
    index &= 0xff;
    if (state != 0 && index != 0xff) {
        char *slot = *(char **)(state + 0x58) + index * 0x1c;
        if (enabled == 0) {
            bit = 0;
            slot[0x18] &= (unsigned char)~8;
        } else {
            bit = (unsigned int)enabled & 1;
            slot[0x18] |= 8;
        }
    } else {
        flags = *(unsigned int *)(owner + 100);
        bit = (unsigned int)enabled & 1;
        *(unsigned int *)(owner + 100) = (flags & ~0x10U) | (bit << 4);
    }
    flags = *(unsigned int *)(owner + 100);
    *(unsigned int *)(owner + 100) = (flags & ~0x800U) | (bit << 11);
}
