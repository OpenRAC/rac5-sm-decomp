extern int D_00206E8C;
extern char *func_129E30(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_12A478(char *record)
{
    char *found;

    found = func_129E30(record, D_00206E8C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
