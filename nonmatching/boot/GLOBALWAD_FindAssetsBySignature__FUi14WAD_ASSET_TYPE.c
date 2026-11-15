/* USA SCUS_976.15 boot: GLOBALWAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPE,
 * 0x01E8FFA0. Observed body: 140 bytes, followed by one zero alignment word.
 * Measured 15 November 2026: all 140 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route and
 * gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Looks a signature up in the WAD header
 * at +0x54, then, when the word at +0x38 is nonzero, in the one at +0x60,
 * and finally in the one at +0x48; returns the first hit.
 * One result variable with an early return after the first lookup and a
 * single final return: retail copies each call's value into that variable
 * and back. Returning each call's value directly gives the same size with
 * different registers. Only the fields this body reads are declared.
 */
typedef struct {
    char pad0[0x38];
    int loaded38;
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

void *GLOBALWAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(unsigned int signature,
                                                           int type) {
    void *asset;

    asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(signature, type, global_wad.header54);
    if (asset != 0)
        return asset;
    if (global_wad.loaded38 != 0)
        asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(signature, type, global_wad.header60);
    if (asset == 0)
        asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(signature, type, global_wad.header48);
    return asset;
}
