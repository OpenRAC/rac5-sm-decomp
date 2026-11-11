extern int D_0011707C;
extern char *func_0DEA00(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_0DEFF0(char *record)
{
    char *found;

    found = func_0DEA00(record, D_0011707C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
