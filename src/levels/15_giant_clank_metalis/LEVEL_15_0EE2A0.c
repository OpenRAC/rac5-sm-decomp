extern int D_0015B80C;
extern char *func_0EDCB0(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_0EE2A0(char *record)
{
    char *found;

    found = func_0EDCB0(record, D_0015B80C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
