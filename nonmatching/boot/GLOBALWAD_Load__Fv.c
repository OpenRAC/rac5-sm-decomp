/*
 * Symbol:  GLOBALWAD_Load__Fv
 * Address: 0x01E90128
 * Body:    280 bytes
 *
 * Loads the global WAD and its companion WAD, records the sound-bank asset
 * (data pointer and size) in the global WAD state, registers the sound bank,
 * then loads the transition WAD and returns its result (0 on early failure).
 *
 * Profile: pinned chain (cpp, cc1 -quiet -O2 -G0, as) built by
 * tools/compiler/build_gnu_ee.sh.
 * Rebuilt binaries are not hash-identical to the pins.
 * Measured: 280/280 matched bytes (full body, relocations resolved at the
 * retail addresses), pre-screen only; not run through the official gate.
 * Exact but unaccepted witness (USA boot, SCUS_976.15). Missing: the campaign
 * integration and the qualifying gate with pinned tools, and names for the
 * unnamed data (D_01F1FE50 and D_01F1FE68 are the two WAD file names,
 * D_01EF6974 receives the sound-signature fixup result).
 */
typedef struct {
    unsigned char pad00[0x38];
    unsigned int field38;
    unsigned char pad3C[0xC];
    unsigned int field48;
    unsigned int field4C;
    unsigned int field50;
    unsigned int field54;
    unsigned int field58;
    unsigned int field5C;
    unsigned int field60;
    unsigned int field64;
    unsigned int field68;
} tMcpGlobals;

extern tMcpGlobals g_McpGlobals;
extern const char D_01F1FE50[];
extern const char D_01F1FE68[];
extern unsigned int D_01EF6974;

extern int WAD_Load__FPCcPP10WAD_HEADERPPUc(const char *name, void *header, void *data);
extern void *GetBufferCachePtr__Fv(void);
extern unsigned char *WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
    unsigned int signature, int type, void *header);
extern unsigned int SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    unsigned int *data, void *buffer, void *callback);
extern void GLOBALWAD_FindAssetsInWadBySignature__FP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID(void);
extern int GLOBALWAD_LoadTransitionWad__Fv(void);

int GLOBALWAD_Load__Fv(void) {
    void *header;
    void *buffer;
    unsigned char *asset;
    unsigned char *second;
    tMcpGlobals *g = &g_McpGlobals;

    if (!WAD_Load__FPCcPP10WAD_HEADERPPUc(D_01F1FE50, &g->field48, 0)) {
        return 0;
    }
    buffer = GetBufferCachePtr__Fv();
    if (buffer == 0) {
        return 0;
    }
    WAD_Load__FPCcPP10WAD_HEADERPPUc(D_01F1FE68, &header, &buffer);
    asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
        0xAABBCC9F, 4, (void *)g->field48);
    if (header != 0) {
        second = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
            0xAABBCCA0, 4, header);
    } else {
        second = 0;
    }
    if (asset != 0 && second != 0) {
        asset += 0xC0;
        D_01EF6974 =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                (unsigned int *)asset, second + 0xC0,
                (void *)GLOBALWAD_FindAssetsInWadBySignature__FP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID);

        g_McpGlobals.field50 = *(unsigned int *)asset & 0xFFFFFF;
        g_McpGlobals.field4C = (unsigned int)(asset + 4);
    } else {
        g_McpGlobals.field50 = 0;
        g_McpGlobals.field4C = 0;
    }
    return GLOBALWAD_LoadTransitionWad__Fv();
}
