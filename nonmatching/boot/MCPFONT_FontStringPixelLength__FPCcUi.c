/* USA SCUS_976.15 boot: MCPFONT_FontStringPixelLength__FPCcUi,
 * 0x01E679B8..0x01E67A88, observed 208-byte body, no trailing padding.
 * Reconstructed from the owner's retail body, helper and reviewed callers.
 * Measured 16 November 2026 with -O2 -G0 and independent SN links:
 * rebuilt default GNU and gnu-ee-trial emit real 208-byte object text/FUNC
 * symbols; independent links reproduce all 208 retail body bytes. These
 * comparisons do not qualify a profile, promote C or confer matching credit.
 * The original retained form emitted 216 bytes, 63 equal positions, first difference +0x1C.
 * A 16-bit stored total and a wide per-glyph temporary separate lifetimes:
 * the spacing increment may reach 65536 before adding the glyph width and
 * reducing the sum modulo 65536. Neither local is exposed to either call.
 * The inline equality predicate is authored classification code, not a
 * separately named retail-body claim; it emits no extra function.
 * The page helper keeps its int/unsigned-char interface. The glyph helper
 * returns four unsigned bytes and accepts two unsigned-byte arguments; byte 2
 * supplies its width. No implementation is imported.
 * Byte 0x90 consumes itself and one following byte; a nonzero font page
 * consumes another byte without an extra count check. Original out-of-count
 * reads, unsigned index behavior and null/count-zero returns are preserved.
 * Qualification, indirect-entry boundaries and semantic review remain open.
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

static inline int mcpfont_is_control_byte(unsigned char character) {
    return character == 0x90;
}

int MCPFONT_FontStringPixelLength__FPCcUi(const char *text, unsigned int length) {
    unsigned int i;
    unsigned short width;

    if (text == 0)
        return 0;
    for (i = 0, width = 0; i < length; ++i) {
        unsigned char character = text[i];
        int page;
        unsigned int glyph_width;

        if (mcpfont_is_control_byte(character)) {
            ++i;
            continue;
        }
        glyph_width = width + 1;
        page = MCPFONT_GetFontPage__FUc(character);
        if (page != 0)
            ++i;
        width = (unsigned short)(glyph_width + func_1E678A0((unsigned char)text[i], (unsigned char)page).width);
    }
    return width;
}
