extern int D_0020FAEC;
extern char *func_127C90(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_1282D8(char *record)
{
    char *found;

    found = func_127C90(record, D_0020FAEC);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
