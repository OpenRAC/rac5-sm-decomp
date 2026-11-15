/* USA SCUS_976.15 boot: MCPFONT_FontStringPixelLength__FPCcUi,
 * 0x01E679B8..0x01E67A88, observed 208-byte body, no trailing alignment word.
 * Reconstructed from the owner's retail body, helper and accepted wrapper.
 * Measured 14 November 2026 with -O2 -G0 and independent SN links:
 * rebuilt default GNU and gnu-ee-trial produce 216 bytes, 63 equal byte
 * positions in the compared 208-byte prefix, first difference at +0x1C.
 * SDK991111 also produces 216 bytes: 52 equal positions, first difference 0.
 * Not exact; no complete-program gate, qualified match or promotion.
 * The helper returns a four-byte aggregate; only its third byte contributes
 * to the measured width. Direct member consumption avoids an extra copy.
 * Byte 0x90 skips itself and the following byte; nonzero font page consumes
 * one additional byte. The original reads past the supplied count when that
 * additional byte is requested at its end; no new bound check is introduced.
 * The total is reduced to 16 bits after adding each glyph's width plus one.
 * Remaining differences: the compiler retains the 0x90 comparison constant
 * in a saved register and exchanges the index/width register allocation.
 * Three aggregate forms and three prefix-comparison forms were measured;
 * local declaration reordering does not change the retained generated text.
 * Reopen with evidence for the original byte-comparison lowering or value
 * lifetimes; do not force registers or add artificial observable operations.
 */
typedef struct {
    unsigned char field0;
    unsigned char field1;
    unsigned char width;
    unsigned char field3;
} MCPFONT_CharMetrics;
typedef char MCPFONT_CharMetrics_size_check[sizeof(MCPFONT_CharMetrics) == 4 ? 1 : -1];

extern int MCPFONT_GetFontPage__FUc(unsigned char character);
extern MCPFONT_CharMetrics func_1E678A0(unsigned char character, unsigned char page);

int MCPFONT_FontStringPixelLength__FPCcUi(const char *text, unsigned int length) {
    unsigned int i;
    unsigned int width;

    if (text == 0)
        return 0;
    for (i = 0, width = 0; i < length; ++i) {
        unsigned char character = text[i];
        int page;

        if (character == 0x90) {
            ++i;
            continue;
        }
        ++width;
        page = MCPFONT_GetFontPage__FUc(character);
        if (page != 0)
            ++i;
        width = (unsigned short)(width + func_1E678A0((unsigned char)text[i], (unsigned char)page).width);
    }
    return width;
}
