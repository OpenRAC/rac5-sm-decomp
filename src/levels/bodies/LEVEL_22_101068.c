extern int D_00165E6C;
extern int func_100A78(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_101068(char *record)
{
    if (func_100A78(record, D_00165E6C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
