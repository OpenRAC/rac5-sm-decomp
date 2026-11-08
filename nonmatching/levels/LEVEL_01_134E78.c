/* LEVEL_01.REL:0x134E78: reviewed 100-byte candidate.
 * pinned C with gnu-ee-trial links 124 bytes; first differs at +6.
 * Retry: Recover original prefix-run clamp and loop register schedule. The best
 * defined C links 124/100 and first differs at byte 6; three source forms and all
 * qualified profiles fail.
 * No matching credit.
 */
unsigned char func_134E78(const unsigned char *data, unsigned int maximum)
{
    unsigned int index = 1;
    unsigned char equal_count = 0;
    unsigned char first = data[0];
    if (maximum > 0x80)
        maximum = 0x80;
    if (index < maximum) {
        unsigned char next = data[1];
        while (first == next) {
            equal_count++;
            index++;
            if (index >= maximum)
                break;
            next = data[index];
        }
    }
    return equal_count != 0 ? equal_count + 1 : 0;
}
