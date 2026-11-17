/* USA SCUS_976.15 boot: MCP_FontStringPixelLength__FPCcUi,
 * 0x01E67F80..0x01E68058, observed 216-byte body, no trailing padding.
 * Reconstructed from the owner's retail body, helper and reviewed callers.
 * Measured 16 November 2026 with -O2 -G0 and independent SN links:
 * rebuilt default GNU and gnu-ee-trial emit real 216-byte object text/FUNC
 * symbols; independent links reproduce all 216 retail body bytes. These
 * comparisons do not qualify a profile, promote C or confer matching credit.
 * The original retained form emitted 216 bytes, 202 equal positions, first difference +0x31.
 * A 16-bit stored total and a wide per-glyph temporary separate lifetimes:
 * the spacing increment may reach 65536 before adding the glyph width and
 * reducing the sum modulo 65536. Neither local is exposed to either call.
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
} MCPFontGlyph;

extern int MCP_GetFontPage__FUc(unsigned char);
extern MCPFontGlyph func_1E67D40(unsigned char, unsigned char);

int MCP_FontStringPixelLength__FPCcUi(const char *text, unsigned int count) {
    unsigned int i;
    unsigned short width;
    int page;
    unsigned int glyph_width;

    if (text == 0)
        return 0;
    width = 0;
    for (i = 0; i < count; ++i) {
        if (text[i] == (char)0x90) {
            ++i;
            continue;
        }
        glyph_width = width + 1;
        page = MCP_GetFontPage__FUc((unsigned char)text[i]);
        if (page != 0)
            ++i;
        width = (unsigned short)(glyph_width + func_1E67D40((unsigned char)text[i], (unsigned char)page).width);
    }
    return width;
}
