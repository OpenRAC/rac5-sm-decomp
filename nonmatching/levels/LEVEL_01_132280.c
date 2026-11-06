/* LEVEL_01.REL:0x132280: Ghidra body 124 bytes.
 * Pinned pure C links 112 bytes and first differs at +0.
 * Recheck extended-byte classification and early-return branch structure. No matching credit.
 */
void func_132280(unsigned char *text, unsigned int length)
{
    unsigned int index = 0;
    if (length != 0) {
        do {
            unsigned int value = *text;
            if (value == 0) {
                return;
            }
            if (value >= 'a' && value <= 'z') {
                *text = value & 0xdf;
            } else if (value >= 0xe0 && value != 0xf0 &&
                       value != 0xf7 && value != 0xff) {
                *text = value & 0xdf;
            }
            index++;
            text++;
        } while (index < length);
    }
}
