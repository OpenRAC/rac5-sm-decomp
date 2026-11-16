/* USA SCUS_976.15 boot: MCPFONT_RegisterFontTextures__Fv at 0x01E677A0.
 * Reconstructed from the retail boot; observed body is 216 bytes and fills
 * the next-label interval through its return and delay slot.
 * Isolated independent SN links reproduce all 216 bytes with the rebuilt
 * default GNU route and gnu-ee-trial, -O2 -G0, default GNU assembler.
 * Both callees use the prototypes of existing accepted boot sources.
 * The initialization byte is set before the asset lookups. A failed lookup
 * leaves the previous payload pointer unchanged; later invocations do not
 * retry once initialized. Each nonnull stored payload is registered, with
 * an independently initialized one-byte output argument for the callee.
 * The two pointer slots and two result words are local views of measured
 * accesses, not a recovered complete font or asset structure. Asset payload
 * offset 0xC0 and size argument 0x10420 come from this caller.
 * No complete-program gate, acceptance or qualified matching credit claimed.
 */
extern unsigned char D_01EDE320;
extern const unsigned char *D_01F61B60[2];
extern int D_01F61B68[2];
extern void *LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(unsigned int signature,
                                                          int type);
extern int TEXMGR_LoadTextureFromMemory__FPCUcUibPbT2N22P29tTEXMGR_ALPHA_COLOR_TOLERANCE(
    const unsigned char *data, unsigned int size, int a, unsigned char *b,
    int c, int d, int e, int f);

void MCPFONT_RegisterFontTextures__Fv(void) {
    unsigned char local[2];
    void *asset;

    if (D_01EDE320 == 0) {
        D_01EDE320 = 1;
        asset = LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(0x7C, 11);
        if (asset != 0)
            D_01F61B60[0] = (unsigned char *)asset + 0xC0;
        if (D_01F61B60[0] != 0) {
            local[0] = 0;
            D_01F61B68[0] = TEXMGR_LoadTextureFromMemory__FPCUcUibPbT2N22P29tTEXMGR_ALPHA_COLOR_TOLERANCE(
                D_01F61B60[0], 0x10420, 1, &local[0], 1, 1, 0, 0);
        }
        asset = LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(0x7D, 11);
        if (asset != 0)
            D_01F61B60[1] = (unsigned char *)asset + 0xC0;
        if (D_01F61B60[1] != 0) {
            local[1] = 0;
            D_01F61B68[1] = TEXMGR_LoadTextureFromMemory__FPCUcUibPbT2N22P29tTEXMGR_ALPHA_COLOR_TOLERANCE(
                D_01F61B60[1], 0x10420, 1, &local[1], 1, 1, 0, 0);
        }
    }
}
