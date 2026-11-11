extern int D_001F098C;
extern char *func_122DC8(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_123410(char *record)
{
    char *found;

    found = func_122DC8(record, D_001F098C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
