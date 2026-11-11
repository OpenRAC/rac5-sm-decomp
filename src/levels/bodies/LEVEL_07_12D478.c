extern int D_0021B18C;
extern char *func_12CE30(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_12D478(char *record)
{
    char *found;

    found = func_12CE30(record, D_0021B18C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
