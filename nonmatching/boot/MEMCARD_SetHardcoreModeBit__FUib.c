/* MEMCARD_SetHardcoreModeBit__FUib 0x01E62848 (14 November 2026).
 * Measured pinned: 11 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
extern unsigned char memcard_region[];

void MEMCARD_SetHardcoreModeBit__FUib(unsigned int slot, int on) {
    unsigned char *p = memcard_region + slot * 20 + 0x7B;
    unsigned char flags = *p & 0xFE;

    if (on) {
        flags |= 1;
    }
    *p = flags;
}
