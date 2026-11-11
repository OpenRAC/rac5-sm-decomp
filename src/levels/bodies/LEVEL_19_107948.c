extern int D_001B5B1C;
extern char *func_107358(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_107948(char *record)
{
    char *found;

    found = func_107358(record, D_001B5B1C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
