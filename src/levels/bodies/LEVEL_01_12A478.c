extern int D_00206E8C;
extern int func_129E30(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_12A478(char *record)
{
    if (func_129E30(record, D_00206E8C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
