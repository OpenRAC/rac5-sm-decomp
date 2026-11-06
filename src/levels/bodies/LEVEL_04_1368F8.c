extern int D_002202AC;
extern int func_1362B0(char *, int);
extern void GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(char *);

void func_1368F8(char *record)
{
    if (func_1362B0(record, D_002202AC) == 0)
        GLOBALWAD_FindAssetsByType__F14WAD_ASSET_TYPE(record);
}
