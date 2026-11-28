/* USA SCUS_976.15 boot: AsciiString2Sjis__FPUcPUs, 0x01E8B288..0x01E8B320.
 * Reconstructed from the retail body only; no SDK implementation is used.
 * Observed body 152 bytes (jr ra and delay slot end at 0x01E8B31C); the
 * following 8 bytes before UTIL_32bitStringHash__FPCc are not claimed.
 * Measured 28 November 2026: default pinned and gnu-ee-trial routes,
 * -O2 -G0, GNU assembler, object text 152 bytes; every byte agrees with the
 * retail body after relocation resolution (strlen, Ascii2Sjis__FUc). This is
 * a local comparison, not a complete-program gate, acceptance or credit.
 * Converts each byte of a NUL-terminated ASCII string with Ascii2Sjis__FUc,
 * stores the 16-bit result byte-swapped into the halfword output, then
 * writes a zero terminator after the last converted character.
 */
extern unsigned int strlen(const char *s);
extern unsigned short Ascii2Sjis__FUc(unsigned char character);

void AsciiString2Sjis__FPUcPUs(unsigned char *src, unsigned short *dst) {
    int i = 0;
    int length = strlen((const char *)src);

    for (; i < length; i++) {
        unsigned short code = Ascii2Sjis__FUc(src[i]);
        int low = code & 0xFF;
        int high = (code >> 8) & 0xFF;
        dst[i] = high | (low << 8);
    }
    dst[i] = 0;
}
