/* USA SCUS_976.15 boot:
 * GLOBALWAD_FindAssetsInWadBySignature__FP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID,
 * 0x01E90030. Observed return extent: 240 bytes; the 248-byte interval ends
 * with a stack adjustment after the return and one zero word, not claimed.
 * Measured 16 November 2026: all 240 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Looks a signature up in the WAD chosen
 * by the location argument (0 or 3: the header at +0x54; 0 or 2: the one at
 * +0x60 when the word at +0x38 is nonzero), then falls back to the header at
 * +0x48, and writes the location that produced the hit through the first
 * argument.
 * The reported location is a second variable that starts as a copy of the
 * argument and is assigned again after every lookup, so it never lives across
 * a call; the first lookup returns early on a hit. The result is cleared
 * before that copy is taken: the other order swaps their two registers.
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
    int id;
    void *asset;

    asset = 0;
    id = location;
    if (id == 0 || id == 3) {
        asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
            signature, type, global_wad.header54);
        id = 3;
        if (asset != 0) {
            *out_location = id;
            return asset;
        }
    }
    if ((location == 0 || location == 2) && global_wad.loaded38 != 0) {
        asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
            signature, type, global_wad.header60);
        id = 2;
    }
    if (asset == 0) {
        asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
            signature, type, global_wad.header48);
        id = 1;
    }
    if (asset != 0)
        *out_location = id;
    return asset;
}
