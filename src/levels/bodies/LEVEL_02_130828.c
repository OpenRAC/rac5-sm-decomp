extern int D_0021BE4C;
extern char *func_1301E0(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_130828(char *record)
{
    char *found;

    found = func_1301E0(record, D_0021BE4C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
