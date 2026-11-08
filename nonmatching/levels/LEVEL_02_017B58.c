/* LEVEL_02.REL:0x017B58: reviewed 160-byte candidate.
 * pinned C with gnu-ee-trial links 144 bytes; first differs at +0.
 * Retry: Recover the byte-index and state-flag branch-likely schedule with the full
 * 160-byte flow; current defined C links 144 bytes and differs at entry.
 * No matching credit.
 */
void func_017B58(char *state, int enable, char *object, unsigned char index)
{
    unsigned int bit;
    if (object != 0 && index != 0xff) {
        unsigned char *entry = *(unsigned char **)(object + 0x58) + index * 0x1c;
        if (enable == 0) {
            bit = 0;
            entry[0x18] &= 0xf7;
        } else {
            bit = (unsigned int)enable & 1U;
            entry[0x18] |= 8;
        }
    } else {
        unsigned int flags = *(unsigned int *)(state + 0x64);
        bit = (unsigned int)enable & 1U;
        *(unsigned int *)(state + 0x64) = (flags & ~0x10U) | (bit << 4);
    }
    *(unsigned int *)(state + 0x64) =
        (*(unsigned int *)(state + 0x64) & ~0x800U) | (bit << 11);
}
