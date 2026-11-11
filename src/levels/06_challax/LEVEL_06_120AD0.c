extern int D_001F5A8C;
extern char *func_120488(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_120AD0(char *record)
{
    char *found;

    found = func_120488(record, D_001F5A8C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
