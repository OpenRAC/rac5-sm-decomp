extern int D_001B499C;
extern char *func_106CB8(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_1072A8(char *record)
{
    char *found;

    found = func_106CB8(record, D_001B499C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
