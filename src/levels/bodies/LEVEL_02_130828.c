extern int D_0021BE4C;
extern int func_1301E0(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_130828(char *record)
{
    if (func_1301E0(record, D_0021BE4C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
