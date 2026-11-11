extern int D_001F5F0C;
extern char *func_1257A8(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_125DF0(char *record)
{
    char *found;

    found = func_1257A8(record, D_001F5F0C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
