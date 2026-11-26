/* MEMCARD_SetWideScreenToMemcard__FUi 0x01E62810 -- clears, then sets from the argument, bit 0 of the memory card flags byte. */
extern unsigned char memcard_region[];

void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int enabled) {
    memcard_region[0x64] &= ~1;
    memcard_region[0x64] |= (enabled ? 1 : 0);
}