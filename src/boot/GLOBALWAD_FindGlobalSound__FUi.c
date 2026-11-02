extern char *GLOBALWAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(unsigned int signature,
                                                                  int type);

char *GLOBALWAD_FindGlobalSound__FUi(unsigned int signature) {
    char *p = GLOBALWAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(signature, 4);

    if (p == 0) return 0;
    p += 0xC4;
    if ((*(unsigned int *)(p + 0x10) & 2) == 0) return 0;
    return p;
}
