extern int D_001DA28C;
extern char *func_11ACA8(char *, int);
extern char *GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

char *func_11B2F0(char *record)
{
    char *found;

    found = func_11ACA8(record, D_001DA28C);
    if (found == 0)
        found = GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
    return found;
}
