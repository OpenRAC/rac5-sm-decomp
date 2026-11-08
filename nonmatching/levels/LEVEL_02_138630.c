/* LEVEL_02.REL:0x138630: reviewed 124-byte candidate.
 * pinned C with gnu-ee-trial links 116 bytes; first differs at +0.
 * Retry: Find a natural source or authentic provenance for the retail redundant zero
 * branch; the exact private trial is not publishable C under the dead-operation rule.
 * No matching credit.
 */
void func_138630(unsigned char *bytes, unsigned int count)
{
    unsigned int index;
    unsigned int marker_f0, marker_ff, marker_f7;
    int upper_mask;
    if (count == 0)
        return;
    index = 0;
    marker_f0 = 0xf0;
    marker_ff = 0xff;
    marker_f7 = 0xf7;
    upper_mask = ~0x20;
    do {
        unsigned int value = *bytes;
        if (value >= 0xe0 && value != marker_f0 && value != marker_ff && value != marker_f7) {
            *bytes = (unsigned char)(value & upper_mask);
        } else if ((unsigned int)(value - 'a') < 26) {
            *bytes = (unsigned char)(*bytes & upper_mask);
        }
        ++index;
        ++bytes;
    } while (index < count);
}
