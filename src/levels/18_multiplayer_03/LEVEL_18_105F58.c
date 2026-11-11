extern int D_001B5E1C;
extern char *func_105968(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_105F58(char *record)
{
    char *found;

    found = func_105968(record, D_001B5E1C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
