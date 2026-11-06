/* LEVEL_01.REL:0x132300: 20 reviewed USA placements.
 * Ghidra body: 184 bytes; pinned C links 168 bytes and first differs at +4.
 * Byte classification and capitalization use a shorter branch layout. Reopen with signedness and character-class evidence.
 * This source has no matching credit.
 */
void func_132300(unsigned char *text, unsigned int count)
{
    unsigned int index = 0;
    int capitalize = 1;
    while (index < count) {
        unsigned int value = *text;
        if (value == ' ' || value == '-' || value == '/') {
            capitalize = 1;
        } else if ((unsigned int)(value - 'a') < 26 || value > 0xdf) {
            if (value == 0)
                return;
            if (capitalize) {
                capitalize = 0;
                *text = value & 0xdf;
            }
        } else if ((unsigned int)(value - 'A') < 26 ||
                   ((value + 0x40) & 0xff) < 0x20) {
            capitalize = 0;
        }
        index++;
        text++;
    }
}
