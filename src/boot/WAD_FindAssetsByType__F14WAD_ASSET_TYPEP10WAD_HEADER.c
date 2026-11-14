/* WAD_FindAssetsByType__F14WAD_ASSET_TYPEP10WAD_HEADER -- returns the first asset of the requested type from the WAD's per-type list. */
typedef struct Asset {
    unsigned char pad[0x64];
    int type;
    unsigned char pad2[8];
    struct Asset *next;
} tAsset;

typedef struct {
    int pad;
    tAsset *first[1];
} tWadHeader;

tAsset *WAD_FindAssetsByType__F14WAD_ASSET_TYPEP10WAD_HEADER(int type, tWadHeader *wad) {
    tAsset *asset;

    if (wad == 0) {
        return 0;
    }
    asset = wad->first[type];
    if (asset != 0) {
        do {
            if (asset->type == type) {
                break;
            }
            asset = asset->next;
        } while (asset != 0);
    }
    return asset;
}
