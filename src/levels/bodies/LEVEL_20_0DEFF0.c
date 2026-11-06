extern int D_0011707C;
extern int func_0DEA00(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_0DEFF0(char *record)
{
    if (func_0DEA00(record, D_0011707C) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
