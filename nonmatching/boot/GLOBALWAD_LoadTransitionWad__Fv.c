/*
 * Symbol:  GLOBALWAD_LoadTransitionWad__Fv
 * Address: 0x01E90568
 * Body:    300 bytes (interval 304 including 4 bytes of padding)
 *
 * Loads the transition WAD pair, splits the second one to the IOP, records the
 * sound-bank asset and two header words in the global state, and returns 1
 * (0 if either WAD fails to load or no buffer-cache pointer is available).
 *
 * Profile: pinned chain (cpp, cc1 -quiet -O2 -G0, as) built by
 * tools/compiler/build_gnu_ee.sh.
 * Rebuilt binaries are not hash-identical to the pins.
 * Measured: 300/300 matched bytes (full body, relocations resolved at the
 * retail addresses), 1 compile; pre-screen only, not run through the official gate.
 * Exact but unaccepted witness (USA boot, SCUS_976.15). Missing: the campaign
 * integration and the qualifying gate with pinned tools, and names for the
 * unnamed data (D_01F1FEA0 and D_01F1FEB0 are the two WAD file names,
 * D_01EF697C and D_01EF6980 receive two words of the second asset).
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
extern const char D_01F1FEA0[];
extern const char D_01F1FEB0[];
extern unsigned int g_IOP_Buffer;
extern unsigned int G_TransitionWadCompacted;
extern unsigned int D_01EF6980;
extern unsigned int D_01EF697C;

extern int WAD_Load__FPCcPP10WAD_HEADERPPUc(const char *name, void *header, void *data);
extern void *GetBufferCachePtr__Fv(void);
extern unsigned char *WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
    unsigned int signature, int type, void *header);
extern unsigned int GLOBALWAD_SplitWadToIOP__FP10WAD_HEADERPvUiRUi(
    void *header, void *buffer, unsigned int size, unsigned int *used);

int GLOBALWAD_LoadTransitionWad__Fv(void) {
    void *header;
    void *buffer;
    unsigned int used;
    unsigned char *asset;
    unsigned char *second;
    tMcpGlobals *g = &g_McpGlobals;

    if (!WAD_Load__FPCcPP10WAD_HEADERPPUc(D_01F1FEA0, &g->field54, 0)) {
        return 0;
    }
    buffer = GetBufferCachePtr__Fv();
    if (buffer == 0) {
        return 0;
    }
    WAD_Load__FPCcPP10WAD_HEADERPPUc(D_01F1FEB0, &header, &buffer);
    asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
        0xAABBCC9F, 4, (void *)g->field54);
    used = 0;
    G_TransitionWadCompacted = GLOBALWAD_SplitWadToIOP__FP10WAD_HEADERPvUiRUi(
        header, (void *)g_IOP_Buffer, 0xD4800, &used);
    second = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
        0xAABBCCA0, 4, (void *)G_TransitionWadCompacted);
    if (asset != 0 && second != 0) {
        asset += 0xC0;
        D_01EF6980 = *(unsigned int *)(second + 0x7C);
        D_01EF697C = *(unsigned int *)(second + 0x68);
        g_McpGlobals.field5C = *(unsigned int *)asset & 0xFFFFFF;
        g_McpGlobals.field58 = (unsigned int)(asset + 4);
    } else {
        g_McpGlobals.field5C = 0;
        g_McpGlobals.field58 = 0;
    }
    return 1;
}
