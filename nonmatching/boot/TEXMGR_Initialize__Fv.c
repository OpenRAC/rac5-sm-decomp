/* USA SCUS_976.15 boot: TEXMGR_Initialize__Fv, 0x01E7BEB0..0x01E7BFA8.
 * Reconstructed from the owner's retail program; observed body 248 bytes,
 * with no trailing alignment bytes. No imported implementation source.
 * Measured 14 November 2026: all 248 bytes exact after independent SN link
 * under both rebuilt default GNU and gnu-ee-trial, -O2 -G0, GNU assembler.
 * These tools are not hash-qualified; this is an unaccepted witness, with
 * complete-program integration, qualification and promotion left separate.
 * The accepted texture-wrapper declaration is reused unchanged. VRAM_Alloc's
 * numeric result is interpreted as unsigned for the original shift; its
 * historical return spelling and enum convention still need type review.
 * The unnamed cleared region keeps an address-derived name. Both grey-data
 * load calls are preserved. A local handle separates each load result from
 * publication in its global, preserving the observed evaluation ordering.
 */
extern unsigned int g_TEXMGR_NextTexture;
extern unsigned int g_TEXMGR_LastTex;
extern unsigned int g_TEXMGR_DefaultTexture;
extern unsigned int g_TEXMGR_GreyTexture;
extern unsigned int g_TextureMemory;
extern unsigned int g_PaletteMemory;
extern unsigned char D_01F702B8[];
extern unsigned char g_Textures[];
extern const unsigned char GreyTexture_Data[];
extern unsigned int GreyTexture_Size;

extern void *memset(void *, int, unsigned int);
extern int TEXMGR_LoadTextureFromMemory__FPCUcUibN22P29tTEXMGR_ALPHA_COLOR_TOLERANCE(
    const unsigned char *, unsigned int, int, int, int, int);
extern unsigned int VRAM_Alloc__FUi12MEMAssetType(unsigned int, int);

void TEXMGR_Initialize__Fv(void) {
    int texture;
    g_TEXMGR_NextTexture = 0;
    memset(D_01F702B8, 0, 0x400);
    memset(g_Textures, 0, 0x6400);
    g_TEXMGR_LastTex = 0xBEBEBEBEu;
    texture = TEXMGR_LoadTextureFromMemory__FPCUcUibN22P29tTEXMGR_ALPHA_COLOR_TOLERANCE(
        GreyTexture_Data, GreyTexture_Size, 1, 0, 0, 0);
    g_TEXMGR_DefaultTexture = texture;
    texture = TEXMGR_LoadTextureFromMemory__FPCUcUibN22P29tTEXMGR_ALPHA_COLOR_TOLERANCE(
        GreyTexture_Data, GreyTexture_Size, 1, 0, 0, 0);
    g_TEXMGR_GreyTexture = texture;
    g_TextureMemory = VRAM_Alloc__FUi12MEMAssetType(0x20000, 0) >> 8;
    g_PaletteMemory = VRAM_Alloc__FUi12MEMAssetType(0x1000, 0) >> 8;
}
