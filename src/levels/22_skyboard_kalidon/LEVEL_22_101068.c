extern int D_00165E6C;
extern char *func_100A78(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_101068(char *record)
{
    char *found;

    found = func_100A78(record, D_00165E6C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
