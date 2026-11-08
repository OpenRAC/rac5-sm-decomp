/* LEVEL_01.REL:0x082880: reviewed 136-byte candidate.
 * pinned C with gnu-ee-trial links 124 bytes; first differs at +1.
 * Retry: Recover the index/data-register lifetimes and missing twelve bytes of the
 * bounded nibble updater; current C links 124/136 with first difference +1 at all
 * fifteen sites.
 * No matching credit.
 */
extern int D_0021A7F0;
extern unsigned char *D_001F3FAC;

void func_082880(unsigned int index, unsigned int value)
{
    unsigned int nibble;
    unsigned char *entry;
    if (index >= 0x400)
        return;
    nibble = value + 1;
    if (value > 0xe)
        nibble = value;
    entry = D_001F3FAC + D_0021A7F0 * 0x200 + 0x10520 + (index >> 1);
    if ((index & 1) != 0)
        *entry = (*entry & 0x0f) | (unsigned char)(nibble << 4);
    else
        *entry = (*entry & 0xf0) | (unsigned char)nibble;
}
