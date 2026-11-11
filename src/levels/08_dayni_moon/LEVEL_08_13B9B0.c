extern int D_0024FD4C;
extern char *func_13B368(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_13B9B0(char *record)
{
    char *found;

    found = func_13B368(record, D_0024FD4C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
