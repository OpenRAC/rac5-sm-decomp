/* USA SCUS_976.15 boot: MCP_FontStringPixelLength__FPCcUi, 0x01E67F80.
 * Reconstructed from the owner's retail code and callers/callees; no imported
 * implementation source. Observed body 216 bytes through 0x01E68058.
 * Measured 14 November 2026 with rebuilt default GNU and gnu-ee-trial,
 * -O2 -G0 and GNU assembler, independently SN-linked at the retail address:
 * 216 compiled bytes, 202/216 equal positions, first differing byte +0x31.
 * The remaining differences exchange the index and width registers in fourteen
 * instructions. Source-order and initialization forms did not remove the tie.
 * The four-byte glyph return and its byte-2 width are proven from both sides;
 * MCP_GetFontPage's int declaration matches the accepted boot definition.
 * The 0x90 control consumes two bytes; a nonzero page consumes the next byte
 * without an additional count check. These original behaviors are preserved.
 * Width wraps to sixteen bits after each glyph; its transient increment is
 * unsigned, local and not exposed to either call. The return is in 0..65535.
 * Reopen with evidence for the original accumulator/index representation or
 * a measured allocation cause with accepted-body controls. Not exact; no
 * complete-program gate, acceptance, promotion or matching credit.
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
    unsigned int width;
    int page;

    if (text == 0)
        return 0;
    width = 0;
    for (i = 0; i < count; ++i) {
        if (text[i] == (char)0x90) {
            ++i;
            continue;
        }
        ++width;
        page = MCP_GetFontPage__FUc((unsigned char)text[i]);
        if (page != 0)
            ++i;
        width = (unsigned short)(width + func_1E67D40((unsigned char)text[i], (unsigned char)page).width);
    }
    return width;
}
