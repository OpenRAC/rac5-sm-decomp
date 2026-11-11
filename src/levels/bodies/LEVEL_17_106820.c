extern int D_001A7F9C;
extern char *func_106230(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_106820(char *record)
{
    char *found;

    found = func_106230(record, D_001A7F9C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
