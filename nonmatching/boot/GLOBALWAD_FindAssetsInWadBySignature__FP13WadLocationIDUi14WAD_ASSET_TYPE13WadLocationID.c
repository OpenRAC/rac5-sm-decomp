/* USA SCUS_976.15 boot:
 * GLOBALWAD_FindAssetsInWadBySignature__FP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID,
 * 0x01E90030. Observed return extent: 240 bytes; the 248-byte interval ends
 * with a stack adjustment after the return and one zero word, not claimed.
 * Measured 15 November 2026 with the rebuilt default GNU route, gnu-ee-trial
 * and gnu-ee-trial-divpad-blockmove, -O2 -G0, default GNU assembler and
 * independent SN link at the retail address: 240 compiled bytes, 87 equal
 * positions, first differing byte +0x04. The three routes agree.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Looks a signature up in the WAD chosen by the location argument (3: the
 * header at +0x54; 0 or 2: the one at +0x60 when the word at +0x38 is
 * nonzero), then falls back to the header at +0x48, and writes the location
 * that produced the hit through the first argument.
 * Retail tests the location for zero before comparing it with 3, keeps the
 * result in an argument register and leaves through one shared return; the
 * compiler merges the zero test away and orders the blocks differently.
 * Reopen with evidence for the original test (an enumeration or a helper).
 */
typedef struct {
    char pad0[0x38];
    unsigned int loaded38;
    char pad3C[0xC];
    void *header48;
    char pad4C[8];
    void *header54;
    char pad58[8];
    void *header60;
} GLOBAL_WAD;

extern GLOBAL_WAD global_wad;
extern void *WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
    unsigned int signature, int type, void *header);

void *GLOBALWAD_FindAssetsInWadBySignature__FP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID(
    int *out_location, unsigned int signature, int type, int location) {
    void *asset;

    asset = 0;
    if (location == 3) {
        asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
            signature, type, global_wad.header54);
        if (asset != 0) *out_location = 3;
    }

    if (asset == 0 && (location == 0 || location == 2) &&
        global_wad.loaded38 != 0) {
        asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
            signature, type, global_wad.header60);
        if (asset != 0) *out_location = 2;
    }

    if (asset == 0) {
        asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
            signature, type, global_wad.header48);
        if (asset != 0) *out_location = 1;
    }
    return asset;
}
