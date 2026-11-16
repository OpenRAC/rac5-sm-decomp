/* USA SCUS_976.15 boot, VRAM_InitGraphics__Fv at 0x01E93430.
 * Reconstructed from the owner's retail program, using the original symbols.
 * All 208 body bytes are exact after independent SN linking under the rebuilt
 * default GNU route and gnu-ee-trial, -O2 -G0, default GNU assembler.
 * The default tools are rebuilt, not hash-qualified; this is an unaccepted
 * witness, with no promotion or additional matching credit.
 *
 * Initializes the auxiliary and shadow render targets, allocates their VRAM,
 * then sets the drawing offset and viewport. Width/height at +8/+0xA agree
 * with the existing DrawRenderTarget view. Other fields retain offset names;
 * this local prefix view does not claim a complete RenderTarget layout.
 * Three source store-order measurements: 195/208, 206/208, then 208/208.
 * The final body is frozen. The two viewport helpers retain their accepted
 * void prototypes; VRAM_Alloc returns a numeric 32-bit allocation result and
 * receives the unsigned size plus the enum-compatible integer type argument.
 */
typedef struct RenderTarget {
    unsigned int field00;
    unsigned int field04;
    unsigned short width;
    unsigned short height;
    unsigned short field0C;
    unsigned short field0E;
    unsigned int field10;
} RenderTarget;

extern RenderTarget gRT_AuxBuffer;
extern RenderTarget gRT_ShadowBuffer;
extern unsigned int VRAM_Alloc__FUi12MEMAssetType(unsigned int size, int type);
extern void VRAM_SetOffset__Fii(int, int);
extern void VRAM_SetViewport__Fiiii(int, int, int, int);

void VRAM_InitGraphics__Fv(void) {
    RenderTarget *aux = &gRT_AuxBuffer;
    RenderTarget *shadow = &gRT_ShadowBuffer;
    aux->width = 256;
    aux->field10 = 2;
    aux->height = 256;
    aux->field0C = 256;
    aux->field00 = VRAM_Alloc__FUi12MEMAssetType(0x40000, 9);
    aux->field04 = VRAM_Alloc__FUi12MEMAssetType(aux->width * aux->height * 4, 9);
    shadow->width = 128;
    shadow->height = 128;
    shadow->field0C = 128;
    shadow->field10 = 0;
    shadow->field00 = VRAM_Alloc__FUi12MEMAssetType(0x10000, 9);
    shadow->field04 = 0;
    VRAM_SetOffset__Fii(0x700, 0x730);
    VRAM_SetViewport__Fiiii(0x800, 0x800, 0x200, 0x1A0);
}
