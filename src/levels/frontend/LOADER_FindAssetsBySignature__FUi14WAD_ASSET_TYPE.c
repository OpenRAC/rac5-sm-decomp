/* FRONTEND:0x01F038 -- when the first helper finds nothing, looks the signature up in the global wad. */
extern int D_000326E4;
extern int func_01EF10(unsigned int signature, int type, int arg);
extern void *GLOBALWAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(unsigned int signature, int type);

void LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(unsigned int signature, int type)
{
    if (!func_01EF10(signature, type, D_000326E4)) {
        GLOBALWAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(signature, type);
    }
}
