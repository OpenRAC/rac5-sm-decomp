extern int D_001D7B0C;
extern char *func_11F930(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_11FF78(char *record)
{
    char *found;

    found = func_11F930(record, D_001D7B0C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
