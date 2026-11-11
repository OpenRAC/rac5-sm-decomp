extern int D_0021F50C;
extern char *func_128098(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_1286E0(char *record)
{
    char *found;

    found = func_128098(record, D_0021F50C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
