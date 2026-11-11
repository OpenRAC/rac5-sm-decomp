extern int D_002202AC;
extern char *func_1362B0(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_1368F8(char *record)
{
    char *found;

    found = func_1362B0(record, D_002202AC);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
