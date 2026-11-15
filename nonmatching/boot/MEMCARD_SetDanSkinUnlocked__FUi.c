/* USA SCUS_976.15 boot: MEMCARD_SetDanSkinUnlocked__FUi, 0x01E627D0.
 * Observed body: 36 bytes, followed by one zero alignment word.
 * Measured 14 November 2026: all 36 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route,
 * gnu-ee-trial and sdk991111, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Bit 1 of the flags byte at
 * memcard_region + 0x64 is cleared, then set when the argument is nonzero.
 * The two updates are separate statements on the stored byte: the second
 * statement reuses the first statement's stored value, which is why the
 * byte extension between them survives. A single expression or a local
 * copy of the byte compiles to 32 bytes instead.
 */
extern unsigned char memcard_region[];

void MEMCARD_SetDanSkinUnlocked__FUi(unsigned int enabled) {
    memcard_region[0x64] &= ~2;
    memcard_region[0x64] |= (enabled ? 2 : 0);
}